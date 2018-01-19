#include<stdlib.h>
#include<stdio.h>
#define IN 1
#define OUT 0
#include "task5.h"

int getSumInt(int arr[], int N)
{
	int summ = 0, i = 0, j = 0, max = 0, min = 0;
	for (;i < N;i++)//lookout the first negative number
	{
		if (arr[i] < 0) {
			min = arr[i++];
			break;
		}
	}

	while(--N >= i)//lookout the last positive number
	{
		if (arr[N] > 0) {
			max = arr[N];
			break;
		}
	}


	//printf("min= %i   ", min);

	for (;i < N;i++)
	{
		summ = summ + arr[i];
		//printf(" %i", arr[i]);//2 part. it's need for imaging solutions
	}
	//printf("    max= %i\n", max);
	return summ;
}
