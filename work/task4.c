#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"
#define NUM 1
#define CHR 0
#define MAX 20
#define RANK 4

int getSum(char buf[])
{
	int sum = 0;
	int numbers[MAX] = { 0 };
	int flag = CHR;

	for (int j = 0, k = 0, i = 0; i < strlen(buf); i++)
	{
		if (buf[i] >= '0' && buf[i] <= '9' && flag == CHR)
		{
			flag = NUM;
			numbers[j] = (buf[i] - '0');
			k++;
		}
		else if (buf[i] >= '0' && buf[i] <= '9' && flag == NUM && k < RANK)
		{
			numbers[j] = numbers[j]*10 + (buf[i] - '0');
			k++;
		}
		else if (buf[i] >= '0' && buf[i] <= '9' && flag == NUM && k >= RANK)
		{
			k = 0;
			j++;
			numbers[j] = (buf[i] - '0');
		}
		else if ((buf[i] <= '0' || buf[i] >= '9') && flag == NUM)
		{
			flag = CHR;
			k = 0;
			j++;
		}
	}
	for (int h = 0; h < MAX; h++)
		sum = sum + numbers[h];
	return sum;
}