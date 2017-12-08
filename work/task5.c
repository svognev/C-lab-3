#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task5.h"

int getSumInt(int arr[], int N)
{
	int i,j,k = 0;
	int result = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			break;
		}
	}

	for (j = N - 1; j >= i; j--)
	{
		if (arr[j] > 0)
		{
			break;
		}
	}

	for (k = i+1; k < j; k++)
	{
		result = result + arr[k];
	}

	return result;
}