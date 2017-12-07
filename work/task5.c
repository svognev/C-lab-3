/*
 * task5.c
 *
 *  Created on: 30 нояб. 2017 г.
 *      Author: michael
 */


int getSumInt(int arr[],int N){
	int i = 0, j = N-1;
	int stop_i = 0, stop_j = 0;
	while(stop_i==0 || stop_j==0){
		if (arr[i] >= 0)
			i++;
		else
			stop_i = 1;

		if (arr[j] < 0)
			j--;
		else
			stop_j = 1;
	}
	int sum = 0;
	for (int s = i+1; s < j; s++){
		sum += arr[s];
	}

	return sum;
}
