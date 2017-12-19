#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int main()
{
	int arr[N] = { '0' };
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
	printf("The sum between first negative number and last positive number is %d\n", getSumInt(arr, N));
	return 0;
}