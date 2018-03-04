#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 15

int main()
{
	int arr[N];

	srand(time(0));

	for (int i = 0; i < N; i++)
		printf("%d  ", arr[i] = (rand() % 19) - 9);
	printf("\n\nSum is %d\n\n", getSumInt(arr, N));

	return 0;
}