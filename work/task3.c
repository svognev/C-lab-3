#include<string.h>
#include<stdlib.h>
#include <ctype.h>

#define N 100

int getMaxWord(char buf[], char word[])
{
	int slovo, count = 0, len = 0;
	int inWord = 0;
	int i = 0, j = 0, k = 0;
	int maxLen = 0;
	char maxWord[N] = {'\0'};

	while (i<strlen(buf))
	{
		if (isalpha(buf[i]))
		{
			maxWord[j]=buf[i];
			j++;
		}

		else if (isspace(buf[i]))
			j=0;

		if (strlen(maxWord) > strlen(word))
		{
			for (k = 0; k <= strlen(maxWord); k++)
				word[k] = maxWord[k];
		}
		i++;
	}

	return strlen(word);
}
