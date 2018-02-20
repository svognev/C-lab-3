#include <stdio.h>
#include "task4.h"

#define IN 1
#define OUT 0
#define MAX 5

int getSum(char buf[])
{

	int i = 0, count=0, value=0, sum=0;
	int in = OUT;

	while (buf[i])
	{
		if (buf[i] >= '0'&& buf[i] <= '9')
		{
			value = value*10 + (buf[i] - '0');
			in = IN;
			count++;
			if (count == MAX)
			{
				sum = sum + value;
				value = 0;
				count = 0;
			}

		}
		else if (in==IN)
		{
			sum = sum + value;
			value = 0;
			count = 0;
			in = OUT;
		}
		
		i++;
	}
	return sum;
}
