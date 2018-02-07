#include <string.h>

//«апись слова из buf начинающегос€ на в индексе ind в массив word
void write(char buf[], char word[], int ind)
{
	int i = 0;
	for (; buf[ind] != 0 && buf[ind] != ' ' && buf[ind] != '\n'; i++, ind++)
	{
		word[i] = buf[ind];
	}
	word[i] = '\0';
}

//—читаем длинну слова в массиве buf начинающегос€ с индекса ind. 
//‘ункци€ возращает длинну слова
int count(char buf[], int ind)
{
	int count = 0;

	for (; buf[ind] != 0 && buf[ind] != ' ' && buf[ind] != '\n'; ind++)
	{
		count++;
	}
	return count;
}


int getMaxWord(char buf[], char word[])
{
	int i = 0;
	int len_word = 0;	//ƒлинна слова в массиве word
	int len_nw = 0;	//ƒлинна слова в анализируемом массиве

	buf[strlen(buf) - 1] = 0;

	while (1)
	{
		if ((buf[i] != ' ') && (buf[i] != 0))
		{			
			len_nw = count(buf, i); //вычисл€ем длинну слова в массиве buf

			//≈сли анализиируемое слово больше слова записаенного в 
			//массиве word записываем его в массив word
			if (len_nw > len_word) 
			{
				write(buf, word, i);
				len_word = len_nw;
			}
			i = i + len_nw; //ѕереходим к поиску следующего слова в массиве buf
		}

		i++;

		if ((buf[i] == 0)||(buf[i] == '\n'))
		{
			return len_word;
		}
	}
}

