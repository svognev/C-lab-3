#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 51

int main()
{
	int arr[N] = { 0 };
	int i = 0;
	srand(time(0));
	for (i = 0; i < N; i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() % 10 + 1;
			break;
		case 1:
			arr[i] = 0 - (rand() % 10 + 1);
			break;
		}
	}
	printf("%d\n", getSumInt(arr, N));
	return 0;
}