#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

#define N 100

int wordCount(char str[])
{
	int inWord = 0;
	int count = 0;
	int i = 0, j = 0;
	char word[N] = { 0 };
	int len = 0, len_str = 0;
	len_str = strlen(str);
	str[len_str - 1] = ' ';

	while (str[i])
	{
		if (str[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			len = 1;
		    word[j++] = str[i];
		}
		else if ((str[i] == ' ') && (inWord == 1))
		{
			inWord = 0;
			if (j == len)
			{
				count++;
				word[j++] = '\0';
			}
			len = j = 0;
		}
		else if (str[i] != ' ' && inWord == 1)
		{
			word[j++] = str[i];
			len++;
		}
		i++;
	}

	return count;
}
