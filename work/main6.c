#include <stdio.h>
#include <time.h>
#include "task6.h"
#define SIZE 15
#define MIN -9
#define MAX 9

// Заполнение массива arr размером size случайными значениями от min до max
int gen_arr(int arr[], int min, int max, int size)
{
	for (int i = 0; i < size; i++)
	{
		switch (rand() % 2)
		{
		case 0:
		{
			arr[i] = rand() % 10;
			break;
		}
		case 1:
		{
			arr[i] = (rand() % 10) * (-1);
			break;
		}
		}
	}
	return 0;
}

int main()
{
	int arr[SIZE];
	srand(time(NULL));
	gen_arr(arr, MIN, MAX, SIZE);
	printf("[");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("] -> %d\n", getSumMaxMin(arr, SIZE));
	return 0;
}