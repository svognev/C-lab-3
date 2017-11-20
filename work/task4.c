#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task4.h"

int getSum(char buf[])
{
	int i, sum = 0;
	for (i = 0; i < strlen(buf); i++)
	{
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			sum = sum + (buf[i] - '0');
		}
	}
	return sum;
}