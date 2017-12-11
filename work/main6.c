#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "task6.h"
#define ARR_LEN 10

int arr[ARR_LEN];

void genArr(int len)
{
	int i = 0, sign = 0;
	for (i = 0; i < len; i++)
	{
		sign = (rand() % 2) ? -1 : 1;
		arr[i] = sign * ((1 + rand() % 100));
	}
}

int main()
{
	srand(time(0));
	genArr(ARR_LEN);
	printf("Sum = %d\n", getSumMaxMin(arr, ARR_LEN));
	return 0;
}