#include <stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int i, j = 0;
	int min = 0;
	int max = 0;
	int result = 0;

	//finding min and max
	for (i = 0; i < N; i++)
	{
		if (arr[i] < arr[min])
		{
			min = i;
		}
		if (arr[i] > arr[max])
		{
			max = i;
		}
	}

	//sum of min and max
	if (min < max)
	{
		for (j = min + 1; j < max; j++)
			result = result + arr[j];
	}
	else if (min > max)
	{
		for (j = max + 1; j < min; j++)
			result = result + arr[j];
	}

	return result;
}
