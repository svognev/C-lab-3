#include <string.h>
#include "task1.h"

int wordCount(char buf[])//подсчет количества слов
{
	buf[512];
	int flag = OUT;
	int i = 0;
	int count = 0;

	buf[strlen(buf) - 1] = '\0'; // удаление \n
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN; //вошли в слово
		}
		else if (buf[i] == ' ' && flag == IN)
			flag = OUT; // вышли из слова
		i++;
	}
	return count;
}