#include <stdio.h>
#include "task5.h"

int getSumInt(int arr[], int N)
{
	int j = 0, k = 0;
	int sum = 0;

	if (arr[0] < 0)
		;
	else
	{
		for (int i = 0; j == 0; i++)
			if (arr[i] < 0)
				j = i;
	}

	for (int i = N - 1; k == 0; i--)
		if (arr[i] > 0)
			k = i;

	printf("The first negative element: %d[%d] \n", arr[j], j);
	printf("The last positive element: %d[%d] \n\n", arr[k], k);

	for (int i = j + 1; i < k; i++)
		sum += arr[i];
	return sum;
}


/*
for (int i = 0; i < N; i++)
{
if(arr[i] < 0)
j = i;
break;
}
for (int i = N-1; i > j; i--)
{
if(arr[i] > 0)
k = i;
break;
}
*/