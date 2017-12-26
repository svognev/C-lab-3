#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int getMaxWord(char buf[], char word[])
{
	int slovo, count = 0, len = 0;
	int inWord = 0;
	int i = 0, j = 0, k = 0;
	int maxLen = 0;

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			len = 1;
		}
		else if ((buf[i] == ' ') && (inWord == 1))
		{
			if (len > maxLen)
			{
				maxLen = len;
				int temp = len;
				for (k = 0; k < len; k++)
				{
					word[k] = buf[i - temp];
					temp--;
				}
				word[k+1] = '\0';
			}
			len = j = 0;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			len++;
		}
		i++;
	}

	return maxLen;
}
