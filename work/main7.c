/*Данная программа предназначена для анализа встречаемости символов в
строке (в том числе пробелов, цифр и тд), за исключением служебных: '\n' и '\0'
а так же вывода их в порядке убывания (от большего к меньшему)*/

#include <stdio.h>
#include <string.h>
#define SIZE 2048
#define SIZE_ASCII 256

//Вывод символов и их количества
int printf_arr(char arr_char[], int arr_count[])
{	
	for (int i = strlen(arr_char) - 1; 0 <= i; i--)
	{
		printf("\"%c\": %d\n", arr_char[i], arr_count[i]);
	}
	return 0;
}

/*http://vscode.ru/prog-lessons/sortirovka-shella.html */
//Сортировка Шелла
void ShellSort(int n, int mass_int[], char mass_char[])
{
	int i, j, step;
	int tmp_i;
	char tmp_c;
	for (step = n / 2; step > 0; step /= 2)
		for (i = step; i < n; i++)
		{
			tmp_i = mass_int[i];
			tmp_c = mass_char[i];

			for (j = i; j >= step; j -= step)
			{
				if (tmp_i < mass_int[j - step])
				{
					mass_int[j] = mass_int[j - step];
					mass_char[j] = mass_char[j - step];
				}
				else
					break;
			}
			mass_int[j] = tmp_i;
			mass_char[j] = tmp_c;
		}
}

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

int main()
{
	char buf[SIZE];	//Строка вводимая пользователем
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
	ShellSort(strlen(arr_char), arr_count, arr_char);
	//Вывод отсортированных массивов в консоль
	printf_arr(arr_char, arr_count);
	return 0;
}