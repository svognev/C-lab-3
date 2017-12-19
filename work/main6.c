#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define N 10

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
			arr[i] = (rand() % 10 + 1) - (rand() % 10 + 1);
			break;
		}
	}
	printf("%d\n", getSumMaxMin(arr, N));

	return 0;
}