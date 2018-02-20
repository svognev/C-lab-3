#include <stdio.h>
#include "task5.h"

int getSumInt(int arr[], int N)
{
	int sum = 0;
	int i;
	int pos = -1;  // posicion positive number
	int neg = -1;  // posicion negative number

	for (i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			neg = i;
			break;
		}
	}
	if (neg == -1)
		return 0;
	for (i = N-1; i >= 0; i--)
	{
		if (arr[i] > 0)
		{
			pos = i;
			break;
		}
	}
	if (pos == -1)
		return 0;

	if (neg < pos)
	{
		for (i = neg + 1; i < pos; i++)
		{
			sum = sum + arr[i];
		}
	}
	else if (pos < neg)
	{
		for (i = pos + 1; i < neg; i++)
		{
			sum = sum + arr[i];
		}
	}
		return sum;
}