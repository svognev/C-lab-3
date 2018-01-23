#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define N 100

int getMaxWord(char buf[], char word[])
{
	int inWord = 0, len=0;
	int i = 0, j = 0, k = 0;
	char maxWord[N] = {'\0'};
	len = strlen(buf);

	while (i < len)
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			maxWord[j] = buf[i];
			j++;
		}
		else if (buf[i] != ' ' && inWord == 1)
		{
			maxWord[j] = buf[i];
			j++;
		}
		else if ((buf[i] == ' ' || buf[i] == '\0') && inWord == 1)
		{
			inWord = 0;
			j = 0;
		}
		
		if (strlen(maxWord) > strlen(word))
		{
			for (k = 0; k <= strlen(maxWord); k++)
				word[k] = maxWord[k];
		}
		i++;
	}
	return strlen(word);
}
