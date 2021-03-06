/*
 * several_algs.h
 *
 *  Created on: Aug 10, 2016
 *      Author: wenjian
 */

#ifndef SEVERAL_ALGS_H_
#define SEVERAL_ALGS_H_

#define OK 0
#define NUM 100
void swap(int* a, int* b); //swap func

int insert_sort(int ori_array[], int n); //insert algorithm implementation

int bubble_sort(int ori_array[], int n); //bubble algorithm implementation

int selection_sort(int ori_array[], int n);//selection algorithm implementation

int quick_sort(int ori_array[], int l, int r);//quick algorithm implementation

int heap_sort(int ori_array[], int n);//max heap algorithm

#endif /* SEVERAL_ALGS_H_ */
