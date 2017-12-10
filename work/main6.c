/* Программа, которая формирует целочисленный массив размера N, 
   а затем находит сумму элементов 
   между минимальным и максимальным элементами.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define N 30
#define TRANSFER 15 //кол-во символов, через которое массив при выводе перенести на новую строку

int main()
{
	srand(time(0));
	int arr[N];

	for (int i = 0; i < N; i++)
	{
		switch (rand() % 2)
		{
		case 0:
		{
			arr[i] = rand() % 100;
		}
		break;
		case 1:
		{
			arr[i] = -(rand() % 100);
		}
		break;
		}
	}

	printf("Array: \n");
	for (int i = 0, count = 1; i < N; i++, count++)
	{
		printf("%4d ", arr[i]);
		if (count % TRANSFER == 0)
			printf("\n");
	}

	printf("\n\n");

	printf("The sum of the elements, located between \n"
		"the minimum and maximum elements: %d \n\n", getSumMaxMin(arr, N));

	return 0;
}
