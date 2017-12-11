#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define N 50
#define LEN_DIGIT 2

int getSum(char str[])
{
	char *end;
	int sum = 0;
	char ch;
	int inDigit = 0;
	int i = 0;
	while (str[i])
	{
		if (isdigit(str[i]))
		{
			inDigit = 0;

			ch = str[i + LEN_DIGIT];
			str[i + LEN_DIGIT] = '\0';
			
			inDigit = strtol(&str[i], &end, 10);
			sum += inDigit;
			
			str[i + LEN_DIGIT] = ch;
			i = i + (end - &str[i]);
			
		}
		else if (!isdigit(str[i]))
			i++;
	}
	return sum;
}
