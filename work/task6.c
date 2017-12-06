/*
 * task6.c
 *
 *  Created on: 30 нояб. 2017 г.
 *      Author: michael
 */


int getSumMaxMin(int arr[],int N){
	int min = arr[0], max = arr[0];
	int min_index = 0, max_index = 0;
	for (int i = 0; i < N; i++){
		if (arr[i] < min){
			min = arr[i];
			min_index = i;
		}
		if (arr[i] > max){
			max = arr[i];
			max_index = i;
		}
	}

	int sum = 0;
	if (min_index < max_index){
		for (int i = min_index+1; i < max_index; i++){
			sum += arr[i];
		}
	}else{
		for (int i = max_index+1; i < min_index; i++){
			sum += arr[i];
		}
	}

	return sum;
}
