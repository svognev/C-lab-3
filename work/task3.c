#include <stdio.h>
#include "task3.h"


int getMaxWord(char buf[], char word[])
{

	int i = 0, j = 0, k = 0, len = 0, maxword = 0;
	int inWord = OUT;

	while (buf[i])
	{
		if (buf[i] != ' '&& inWord == OUT)
		{
			inWord = IN;
			len = 1;
			j = i;
		}
		else if (buf[i] != ' '&& inWord == IN)
		{
			len++;
		}
		else if (buf[i] == ' '&& inWord == IN)
		{
			inWord = OUT;
			if (len > maxword)
			{
				maxword = len;
				for (k=0; k < maxword; k++)
				{
					word[k] = buf[j++];
				}
				word[k] = '\0';
			}
			len = 0;
		}
		i++;
	}
	return maxword;
}
