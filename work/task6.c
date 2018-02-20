#include <stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int i;
	int max = 0;  // posicion max number
	int min = 0;  // posicion min number

	for (i = 1; i < N; i++)
	{
		if (arr[i] < arr[min])
			min = i;
	}
	for (i = 1 - 1; i < N; i++)
	{
		if (arr[i] > arr[max])
			max = i;
	}
	if (min < max)
	{
		for (i = min + 1; i < max; i++)
		{
			sum = sum + arr[i];
		}
	}
	else if (max < min)
	{
		for (i = max + 1; i < min; i++)
		{
			sum = sum + arr[i];
		}
	}
	return sum;
}