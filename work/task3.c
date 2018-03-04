#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "task3.h"
#define SIZE 100
#define IN 1
#define OUT 0

int getMaxWord(char buf[], char word[])
{
	int i, j, status, lenght;
	int border = strlen(buf);
	char max[SIZE] = {'\0'};

	for (i = j = 0, status = OUT; i <= border; i++)
	{
		if (!isspace(buf[i]) && status == OUT)
		{
			status = IN;
			max[j] = buf[i];
			j++;
		}
		else if (!isspace(buf[i]) && status == IN)
		{
			max[j] = buf[i];
			j++;
		}
		else if ((isspace(buf[i]) || buf[i] == '\0') && status == IN)
		{
			status = OUT;
			max[j] = ' ';
			if (strlen(max) > strlen(word))
			{
				if 	(max[strlen(max) - 1] = '\n')
					max[strlen(max) - 1] = '\0';
				lenght = strlen(max);
				for (j = 0; j <= lenght; j++)
					word[j] = max[j];
			}
			j = 0;
		}
	}
	return lenght;
}