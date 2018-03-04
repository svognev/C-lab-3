#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define N 15

int getSumMaxMin(int arr[], int N)
{
	int max, min, i;
	for (i = 0, max = -9, min = 9; i < N; i++)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
	}

	return max + min;
}