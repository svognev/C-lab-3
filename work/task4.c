#include <stdio.h>
#include <string.h>
#include "task4.h"
#define N 100

int getSum(char buf[])
{
	int i = 0, j = 0, k = 0, l = 0, sum = 0;
	int numbers[N] = { '0' };
	int flag = 0; // 0 for char, 1 for number
	int rank = 2; // rank of numbers

	for (i = 0, j = 0, k = 0; i < strlen(buf); i++)
	{
		if (buf[i] >= '0' && buf[i] <= '9' && flag == 0)
		{
			flag = 1;
			numbers[j] = (buf[i] - '0');
			k++;
		}
		else if (buf[i] >= '0' && buf[i] <= '9' && flag == 1 && k < rank)
		{
			numbers[j] = numbers[j] * 10 + (buf[i] - '0');
			k++;
		}
		else if (buf[i] >= '0' && buf[i] <= '9' && flag == 1 && k >= rank)
		{
			k = 0;
			j++;
			numbers[j] = (buf[i] - '0');
		}
		else if ((buf[i] <= '0' && buf[i] >= '9') && flag == 1)
		{
			flag = 0;
			k = 0;
			j++;
		}
	}
	for (l = 0; l < N; l++)
		sum = sum + numbers[l];
	return sum;
}
