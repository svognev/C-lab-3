#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getSumInt(int arr[], int N)
{
	int i, j, k;
	int sum = 0, pos = 0, neg = 0;
	

	for (i = 0; i < N; i++)
	{
		if (arr[i] < 0)
		{
			neg = i;
			break;
		}
	}
	for (j = N - 1; j >= 0; j--)
	{
		if (arr[j] >= 0)
		{
			pos = j;
			break;
		}
	}
	printf("Position of the first negative element: %d\n", neg + 1);
	printf("Position of the last positive element: %d\n", pos + 1);
	putchar('\n');

	for (k = neg + 1; k < pos; k++)
		sum += arr[k];
	return sum;

}
