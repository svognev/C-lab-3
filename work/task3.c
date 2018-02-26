#include <stdio.h>
#include "task3.h"
#define OUT 0
#define IN 1

int getMaxWord(char buf[], char word[])
{
	int i = 0, j = 0;// элементы в массиве
	int cn = 0; //счетчик элеметов при записи слова
	int len = 0;//счетчик букв
	int max = 0;//самое большое слово
	int flag = OUT;
	while (1)
	{
		if (buf[i] != ' '&& buf[i] != '\0'&& flag == OUT)
		{
			flag = IN;
			len = 1;
			j = i;
		}
		else if (buf[i] != ' '&& buf[i] != '\0'&& flag == IN)
		{
			len++;
		}
		else if (buf[i] == ' '&& flag == IN)
		{
			flag = OUT;

			if (len > max)
			{
				max = len;

				for (cn = 0; cn < max; cn++)
				{
					word[cn] = buf[j++];
				}

				word[cn] = '\0';
			}

			len = 0;
		}

		else if (buf[i] == '\0'&& flag == IN)
		{
			flag = OUT;

			if (len > max)
			{
				max = len;

				for (cn = 0; cn < max; cn++)
				{
					word[cn] = buf[j++];
				}

				word[cn] = '\0';
			}

			len = 0;
			break;
		}

		i++;
	}

	return max;
}