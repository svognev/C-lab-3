#include <stdio.h>
#include <string.h>
#include <conio.h>
#define SIZE 512
#define DIGIT 5	
//Максимальное количество разрядов числа


//Вставка "_" по вереданному индексу, при этом производится сдвиг следующих элементов
int shift(char str[], int ind)
{
	for (int i = strlen(str); ind < i; i--)
	{
		str[i] = str[i - 1];
	}
	str[ind] = '_';
	return 0;
}

//Преобразование строки в int начиная с индекса ind
int str_to_int(char str[], int ind)
{
	unsigned int strLen = 0;
	unsigned int i = ind;

	//while (str[i] != '\0') 
	while ((str[i] >= '0' && str[i] <= '9') || ((str[i] == '-' || str[i] == '+') && i == ind))
	{
		strLen += 1;
		i++;
	}

	signed int num = 0;
	int ten;
	int signFlag = 1; //true: +, false: -

	for (i = ind; i < strLen; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (i == ind && str[i] == '-')
			{
				signFlag = 0;
				continue;
			}
			if (i == ind && str[i] == '+')
			{
				signFlag = 1;
				continue;
			}
			return NULL;
		}

		ten = 1;
		for (unsigned int j = 0; j < strLen - 1 - i; j++) {
			ten *= 10;
		}

		num += ten * (str[i] - '0');
	}

	if (signFlag)
	{
		return num;
	}
	else
	{
		return -num;
	}
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
			else
			{
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
	int max_size = 5;
	int count = 0;
	int sum = 0;
	separater(buf, max_size);	
	//Нахождение начала числа
	for (int i = 0; buf[i] != 0; i++)
	{
		if ((buf[i] >= '0' && buf[i] <= '9') && (i == 0 || (buf[i - 1] <'0' && buf[i - 1] >'9')))
		{
			if (buf[i - 1] == '-')
			{
				sum = sum + str_to_int(buf, i - 1);
			}
			else 
				sum = sum + str_to_int(buf, i);
		}
	}
	return sum;
}