#include <stdio.h>
#include "task1.h"

int wordCount(char buf[])
{
	int i = 0, count = 0;
	int inWord = OUT;

	while (buf[i])
	{
		if (buf[i] != ' '&& inWord == OUT)
		{
			inWord = IN;
		}
		else if (buf[i] == ' '&& inWord == IN)
		{
			inWord = OUT;
			count++;
		}
		i++;
	}
	if (buf[i] == '\0'&& inWord == IN)
		count++;
	return count;
}