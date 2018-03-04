#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "task4.h"
#define SIZE 1000
#define ORDER 7

int getSum(char buf[])
{
	int i = 0, value = 0, sum = 0, separator = 1;
	while (buf[i])
	{
		for (separator = ORDER; isdigit(buf[i]) && separator > 0; separator--, i++)
			value = value * 10 + (buf[i] - '0');

		sum += value;
		value = 0;
		
		if (separator || sum == 0)
		{
			while (!isdigit(buf[i]) && buf[i])
				i++;
		}
	}
	return sum;
}