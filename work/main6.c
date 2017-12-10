#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

#define N 7
#define DIG 19

int main()
{
	int buf[N] = { 0 };
	int i = 0, j = 0;
	int p = 0; // count positive 
	int n = 0; // count negative 
	int ch = 0;

	srand(time(0));

	for (i; i < N; i++)
	{
		ch = 0;
		ch = rand() % DIG - (DIG / 2);

		if ((ch < 0) && (n < (N / 2)))
		{
			buf[i] = ch;
			n++;
		}

		if ((ch >= 0) && (p < (N / 2)))
		{
			buf[i] = ch;
			p++;
		}
		printf("%d \n", buf[i]);
	}

	printf("Sum %d\n", getSumMaxMin(buf, N));

	return 0;
}
