#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"
#define N 10

int main()
{
	int i;
	int arr[N];
	srand(time(0));

	for (i = 0; i < N; i++)
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() % 10;
			break;
		case 1:
			arr[i] = -(rand() % 10);
			break;
		}
		printf("Your array: \n");
		for (i = 0; i < N; i++)
			printf("%d  ", arr[i]);
		putchar('\n');

		printf("Sum between the first negative and the last positive element: %d\n", getSumInt(arr, N));

		return 0;
}

