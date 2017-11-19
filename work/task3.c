#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define IN 1
#define OUT 0

int getMaxWord(char buf[], char word[])
{
	int i = 0;
    int j = 0;
	char addBuf[512] = { '\0' };
	int flag = OUT;
	while (i < strlen(buf))
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			flag = IN;
			addBuf[j++] = buf[i];
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			addBuf[j++] = buf[i];
		}
		else if ((buf[i] == ' ' || buf[i] == '\0') && flag == IN)
		{
			flag = OUT;
			j = 0;
		}
		if (strlen(addBuf) > strlen(word))
		{
			for (int k = 0; k <= strlen(addBuf); k++)
			{
				word[k] = addBuf[k];
			}
		}
		else if (buf[i] == '\0')
		{
			break;
		}
		i++;
	}
	return strlen(word);
}