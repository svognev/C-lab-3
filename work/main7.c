/*Данная программа предназначена для анализа встречаемости символов в
строке (в том числе пробелов, цифр и тд), за исключением служебных: '\n' и '\0'*/

#include <stdio.h>
#include <string.h>
#define SIZE 2048
#define SIZE_ASCII 256

//Вывод символов и их количества
int printf_arr(char arr_char[], int arr_count[])
{
	for (int i = 0; arr_char[i] != 0; i++)
	{
		printf("%c\t%d\n", arr_char[i], arr_count[i]);
	}
	return 0;
}
//--------------------------------------------------------


//Сортировка массивов
int InsertionSort(char * arr_char, int * arr_count, int size)
{
	int tmp_int = 0;
	char tmp_char = 0;

	for (int i = 0; 0 < size - 1; i++)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (arr_count[i] > arr_count[j])
			{
				//перемещение элементов массива count
				tmp_int = arr_count[j];
				arr_count[j] = arr_count[i];
				arr_count[i] = tmp_int;
				//перемещение элементов массива count
				tmp_char = arr_char[j];
				arr_char[j] = arr_char[i];
				arr_char[i] = tmp_char;
			}
		}	
	}
	return 0;
}
//--------------------------------------------------------

//Проверка наличия символа в массиве
//Возвращает индекс элемента или -1 если он отсутствует
int poisk(char simvol, char arr[])
{
	for (int i = 0; arr[i] != 0; i++)
	{
		if (arr[i] == simvol)
		{
			return i;
		}
	}
	return -1;
}
//--------------------------------------------------------


int main()
{
	char buf[SIZE] = { 0 };	//Строка вводимая пользователем
	char arr_char[SIZE_ASCII] = { 0 };	//Массив символов
	int arr_count[SIZE_ASCII] = { 0 };	//Массив количества символов

	printf("Enter a text string: ");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = 0;

	//Формируем массив уникальных элементов
	for (int ind = 0, i = 0; buf[i] != 0; i++)
	{
		if (poisk(buf[i], arr_char) == -1)
		{
			arr_char[ind] = buf[i];
			ind++;
		}
	}	

	//Подсчитываем количество элементов
	for (int i = 0; arr_char[i] != 0; i++)
	{
		for (int j = 0; buf[j] != 0; j++)
		{
			if (arr_char[i] == buf[j])
			{
				arr_count[i]++;
			}
		}
	}

	//Сортируем массивы
	InsertionSort(arr_char, arr_count, SIZE_ASCII);
	//Вывод отсортированных массивов в консоль
	printf_arr(arr_char, arr_count);	
	return 0;
}