#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"
#define IN 1
#define OUT 0

int wordCount(char buf[])
{
	int flag = OUT;
	int i = 0;
	int count = 0;

	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN;
		}
		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT;
		}
		i++;
	}

	return count;

	return 0;
}