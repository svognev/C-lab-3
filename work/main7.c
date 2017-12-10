/* ѕрограмма, котора€ печатает таблицу встречаемости 
   символов дл€ введЄнной строки, отсортированную по убыванию частоты
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 1000 //кол-во символов в строке
#define N 95 //кол-во символов дл€ ввода пользователю (с 32 по 126 = 95)


int main()
{
	int i;
	char line[SIZE];  //строка, вводима€ пользователем
	char symbols[N];  //массив используемых символов
	int count[N] = { 0 }; //массив количества (сколько раз встретилс€ каждый символ

	//создание строки дл€ сортировки:
	printf("Enter the string: \n");
	fgets(line, SIZE, stdin);
	line[strlen(line)-1] = '\0';  //удаление \n
	printf("\n");

	i = 0;
	while (line[i])   //while (buf[i] != '\0')
	{
		count[line[i] - ' ']++;
		i++;
	}


	/*
		//¬ывод символов и встречаемости без упор€дочивани€ (дл€ проверки):
		for (i = 0; i < N; i++)
		{
			if (count[i] > 0)
				printf("%c - %d\n", i + ' ', count[i]);
		}
		printf("\n");
	*/

	// создание массива symbols[]:
	for (i = 0; i < N; i++)
		symbols[i] = (i + ' ');

	//сортировка по убыванию:
	for (int i = 1; i < N; i++)
	{
		int j;
		int c;  // вспомогательна€ переменна€ дл€ хранени€ элемента массива
		char s;  // вспомогательна€ переменна€ дл€ хранени€ элемента массива
		c = count[i];
		s = symbols[i];
		j = i - 1;
		while (c > count[j])
		{
			count[j + 1] = count[j];
			count[j] = c;
			symbols[j + 1] = symbols[j];
			symbols[j] = s;
			j--;
			if (j < 0)
				break;
		}
	}

	//вывод таблицы встречаемости, отсортированной по убыванию:
	for (i = 0; i < N; i++)
	{
		if (count[i] > 0)
			printf("%c - %d\n", symbols[i], count[i]);
	}
	printf("\n");

	return 0;
}