/*
 * binary_search_tree.c
 *
 *  Created on: Aug 15, 2016
 *      Author: wenjian
 */
#include<stdlib.h>
#include<stdio.h>
#include"binary_search_tree.h"

/*
 * binary search tree
 * every node larger than its left child and less than its right child
 * it you in ordered the tree, you can obtain an ordered array
 */
struct BSTNode* bstree_search(struct BSTNode* root, int element){
	if(root == NULL) return NULL;
	struct BSTNode* tmp = root;
	while(tmp != NULL){
		if(element == (tmp->data)) return tmp;/*bingo*/
		else if(element < (tmp->data)) tmp = tmp->lchild;/*left*/
		else if(element > (tmp->data)) tmp = tmp->rchild;/*right*/
	}
	return NULL;
}
/*
 * give u an array, create a binary search tree
 */
struct BSTNode* create_bstree(int array[], int n){
	if(n==0) return NULL;
	struct BSTNode* root = (struct BSTNode*)malloc(sizeof(struct BSTNode));
	root->data = array[0];

	int i = 1;
	for(i=1; i<n; i++){
		struct BSTNode* p = root;/*as a temp variable*/
		struct BSTNode* q;/*store the parent node*/
		struct BSTNode* tmp = (struct BSTNode*)malloc(sizeof(struct BSTNode));/*create new node*/
		tmp->data = array[i];
		while(p != NULL){
			if(tmp->data < p->data){
				q = p;
				p = p->lchild;
			}
			else if(tmp->data > p->data){
				q = p;
				p = p->rchild;
			}
		}
		if(tmp->data < q->data) q->lchild = tmp;/*less than the q node, on the left*/
		else if(tmp->data > q->data) q->rchild = tmp;
	}
	return root;
}
