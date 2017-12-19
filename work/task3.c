#include <stdio.h>
#include <string.h>
#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0, k = 0;
	char newBuf[256] = { '\0' };
	int inWord = 0; // 0 - out, 1 - in

	while (i < strlen(buf))
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			newBuf[j++] = buf[i];
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			newBuf[j++] = buf[i];
		}
		else if ((buf[i] == ' ' || buf[i] == '\0') && inWord == 1)
		{
			inWord = 0;
			j = 0;
		}
		if (strlen(newBuf) > strlen(word))
		{
			for (k = 0; k <= strlen(newBuf); k++)
			{
				word[k] = newBuf[k];
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