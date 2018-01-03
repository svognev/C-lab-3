#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

#define SIZE 20

int main()
{
	int arr[SIZE];
	int i = 0;
	srand(time(0));
	for (i = 0; i < SIZE; i++)
	{
		if (rand() % 2 == 0)
			arr[i] = rand() % 100;
		else
			arr[i] = -(rand() % 100);
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Summa = %d\n", getSumMaxMin(arr, SIZE));
	return 0;
}