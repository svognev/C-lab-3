#include <string.h>
#include <ctype.h>  //for isspace()
#include "task1.h"
#define IN 1
#define OUT 0

int wordCount(char buf[])
{
	int flag = OUT;
	int words = 0;  //counter for words
	int i = 0;
	buf[strlen(buf) - 1] = '\0';  //удаление \n

	while (buf[i])
	{
		if (!isspace(buf[i]) && flag == OUT)
		{
			words++;
			flag = IN;  //вошли в слово
		}
		else if (isspace(buf[i]) && flag == IN)
			flag = OUT;  //вышли из слова
		i++;
	}
	return words;
}