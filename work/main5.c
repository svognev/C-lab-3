#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "task5.h"
#define SIZE 10
#define MIN -9
#define MAX 9

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
	printf("] -> %d\n", getSumInt(arr, SIZE));	
	return 0;
}