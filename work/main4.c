/* Программа, которая находит сумму чисел во введённой строке. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
#include <string.h>
#define LEN 1000 //кол-во символов в строке


int main()
{
	int i;
	char buf[LEN];  //строка, вводимая пользователем

	//создание строки для обработки:
	printf("Enter the string: \n");
	fgets(buf, LEN, stdin);
	buf[strlen(buf) - 1] = '\0';  //удаление \n
	printf("\n");

	printf("%u \n\n", getSum(buf));  // %u - unsigned int

	return 0;
}

	