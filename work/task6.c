#include <stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
	int j = 0, k = 0;
	int min = 0, max = 0;
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			j = i;
			min = arr[i];
		}
		else if (arr[i] > max)
		{
			k = i;
			max = arr[i];
		}
	}
	
	
	if (j < k)
	{
		printf("min: %d[%d] \n", arr[j], j);
		printf("max: %d[%d] \n\n", arr[k], k);
		for (int i = j + 1; i < k; i++)
			sum += arr[i];
	}
	else if (j > k)
	{
		printf("max: %d[%d] \n", arr[k], k);
		printf("min: %d[%d] \n\n", arr[j], j);
		for (int i = k + 1; i < j; i++)
			sum += arr[i];
	}

	return sum;
}