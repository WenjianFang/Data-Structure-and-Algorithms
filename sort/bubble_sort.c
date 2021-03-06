/*
 * bubble_sort.c
 *
 *  Created on: Aug 10, 2016
 *      Author: wenjian
 */

/**
 * bubble sort
 * stable
 * time: worst, O(n^2); average, O(n^2); best, O(n)
 * auxiliary: O(1)
 */
#include"several_algs.h"
int bubble_sort(int ori_array[], int n){
	int i=0;
	int j=0;
	for(i=0; i<n; i++){ //find i-th minimum number
		for(j=n-1; j>i; j--){ //start from the last one element
			if(ori_array[j] < ori_array[j-1])
				swap(&ori_array[j], &ori_array[j-1]);//select the minimum elem so far
		}
	}
	//print("bubble_sort", ori_array, n);
	return OK;
}
