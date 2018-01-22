#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 512
#define DIGIT 3
//Максимальное количество разрядов числа

//Вставка "_" по вереданному индексу, при этом производится сдвиг следующих элементов
int shift(char str[], int ind)
{
	for (int i = strlen(str) + 1; ind < i; i--)
	{
		str[i] = str[i - 1];
	}
	str[ind] = '_';
	return 0;
}

//Разделение длинных последовательностей цифр
int separater(char buf[], int max_size)
{
	int count = 0;	//Счётчик подряд идущих цифр

	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] >= '0' && buf[i] <= '9')
		{
			count++;
			if (count == max_size && (buf[i + 1] >= '0' && buf[i + 1] <= '9'))
			{
				shift(buf, i + 1);
				count = 0;
			}			
		}
		else
			count = 0;
	}
	return 0;
}

//нахождение суммы
int getSum(char buf[])
{
	int count = 0;
	int sum = 0;
	char namber[DIGIT + 1] = { 0 };
	separater(buf, DIGIT);
	printf("%s\n", buf);
	//Нахождение начала числа
	for (int i = 0; buf[i] != 0; i++)
	{
		if ((buf[i] >= '0' && buf[i] <= '9') && (i == 0 || buf[i - 1] <'0' || buf[i - 1] >'9' || buf[i - 1] == '-'))
		{
			for (int j = 0; ((buf[i] >= '0' && buf[i] <= '9') && (i == 0 || buf[i - 1] <'0' || buf[i - 1] >'9' || buf[i - 1] == '-')); i++, j++)
			{
				namber[j] = buf[i];
			}
			if (strlen(namber) > 0)
			{
				sum = sum + atoi(namber);
				//Очистка буферного массива
				for (int j = 0; namber[j] != '\0'; j++)
				{
					buf[j] = '\0';
				}
			}
		}
	}
	return sum;
}