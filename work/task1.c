#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "task1.h"
#define SIZE 1000
#define IN 1
#define OUT 0

int wordCount(char buf[])
{
	int i, status, words;
	for (i = 0, status = OUT, words = 0; buf[i]; i++)
	{
		if (!isspace(buf[i]) && status == OUT)
		{
			status = IN;
			if (buf[i + 1] == '\0')
			{
				status = OUT;
				words++;
				break;
			}
		}
		else if (!isspace(buf[i]) && status == IN)
		{
			if (buf[i + 1] == '\0')
			{
				status = OUT;
				words++;
				break;
			}
		}
		else if (isspace(buf[i]) && status == IN)
		{
			status = OUT;
			words++;
		}
	}
	return words;
}