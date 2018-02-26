#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task6.h"
#define N 10

int main()
{
	int arr[N];
	int summ = 0;

	srand(time(0));

	for (int i = 0; i < N; i++)
	{
		arr[i] = (rand() % 19) - 9;
	}
	printf("%d\n", getSumMaxMin(arr, N));
	return 0;
}