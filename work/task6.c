#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int getSumMaxMin(int arr[], int N)
{
	int i, imin = 0, imax = 0, sum = 0;
	for (i = 0; i < N; i++)
	{
		if (arr[i] > arr[imax])
			imax = i;
		if (arr[i] < arr[imin])
			imin = i;
	}
	if (imin > imax)
	{
		for (i = imax + 1; i < imin; i++)
			sum += arr[i];
	}
	else if (imax > imin)
	{
		for (i = imin + 1; i < imax; i++)
			sum += arr[i];
	}

	printf("Position of max element: %d\n", imax+1);
	printf("Position of min element: %d\n", imin+1);
	putchar('\n');

	return sum;
}