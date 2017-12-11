#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define IN 1
#define OUT 0



int getSum(char buf[])
{
	int len = strlen(buf);
	buf[len - 1] = '\0';
	int i = 0;
	unsigned int sum=0;
	unsigned int value=0;
	int flag = OUT;
	int counter = 0;

	while (buf[i])
	{
		if (buf[i] > '0' && buf[i] <= '9')
		{
			value = value * 10 + buf[i] - '0';
			counter++;
			flag = IN;
			if (counter == 9)
			{
				sum = sum + value;
				value = 0;
				counter = 0;
			}
		}
		else
		{
			if (flag == IN)
			{
				sum = sum + value;
				value = 0;
				counter = 0;
			}
			flag = OUT;
		}
		i++;
	}
	if (flag == IN)
	{
		sum = sum + value;
	}
	return sum;
}