#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 15

int getSumInt(int arr[], int N)
{
	int leftbord, rightbord, i, sum;
	for (leftbord = 0; leftbord < N; leftbord++)
	{
		if (arr[leftbord] < 0)
			break;
	}
	for (rightbord = N - 1; rightbord >= leftbord; rightbord--)
	{
		if (arr[rightbord] > 0)
			break;
	}
	for (i = leftbord + 1, sum = 0; i < rightbord; i++)
		sum += arr[i];

	return sum;
}