#include <stdio.h>
#include <string.h>
#include "task3.h"
#define S 100
#define IN 1
#define OUT 0

int getMaxWord(char buf[], char word[])
{
	int flag = OUT;
	int letters = 0;
	int max = 0;
	char max_word[S] = { '\0' };
	int i = 0, j = 0, k = 0;
	


	while (i < strlen(buf))
	{
		if (buf[i]!= ' ' && flag == OUT)
		{

			flag = IN;  //вошли в слово
			max_word[j] = buf[i];
			j++;
		}
		else if (buf[i]!= ' ' && flag == IN)  //внутри слова
		{
			max_word[j] = buf[i];
			j++;
		}
		else if ((buf[i] == ' ' || buf[i] == '\0') && flag == IN)
		{
			flag = OUT;  //вышли из слова
			j = 0;
		}
		if (strlen(max_word) > strlen(word))
		{
			int len = strlen(max_word);
			for (k = 0; k <= len; k++)
				word[k] = max_word[k];
		}
		
		i++;
	}
	return strlen(word);
}