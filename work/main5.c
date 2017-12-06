/*
 * main5.c
 *
 *  Created on: 30 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <time.h>
#include "task5.h"

#define N 8

int main(){
	int arr[N] = {0};
	//int test[7] = {1,-2,3,-4,-6,2,3};
	srand(time(0));
	for (int i = 0; i < N; i++){
		switch (i % 2){
			case 0:
				arr[i] = rand() % 10;
				break;
			case 1:
				arr[i] = rand() % 10 - 10;
		}
	}

//	for (int i = 0; i < N; i++){
//		printf("%d ", arr[i]);
//	}
	printf("%d", getSumInt(arr, N));

	return 0;
}

