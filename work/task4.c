#include <stdio.h>
#include "task4.h"
#define IN 1
#define OUT 0

int getSum(char buf[])
{
	int i = 0, count = 0, value = 0, sum = 0;
	int flag = OUT;
	while (buf[i])
	{
		if (buf[i] >= '0'&& buf[i] <= '9')
		{
			value = value * 10 + (buf[i] - '0');
			flag = IN;
			count++;
			if (count == 5)
			{
				sum = sum + value;
				value = 0;
				count = 0;
			}
		}
		else if (flag == IN)
		{
			sum = sum + value;
			value = 0;
			count = 0;
			flag = OUT;
		}
		i++;
	}
	return sum;
}