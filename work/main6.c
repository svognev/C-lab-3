#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define N 10

int main()
{
	int i;
	int arr[N];
	srand(time(0));

	for (i = 0; i < N; i++)
	{
		if (rand() % 2 == 0)
			arr[i] = rand() % 10;
		else arr[i] = -(rand() % 10);
	}

	printf("Your array: \n");
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	putchar('\n');


	printf("Sum of elements between min and max elements of array: %d\n", getSumMaxMin(arr, N));

	return 0;
}





