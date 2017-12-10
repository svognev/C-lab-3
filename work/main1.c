/*Программа, подсчитывающая количество слов во введённой пользователем строке*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#define SIZE 1000

int main()
{
	char buf[SIZE];
	printf("Enter the string: \n");
	fgets(buf, SIZE, stdin);

	printf("\nNumber of words is: %d \n\n", wordCount(buf));
	return 0;
}