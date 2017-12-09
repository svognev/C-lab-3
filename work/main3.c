/*Программа, которая для введённой строки выводит самое длинное
  слово и его длину.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define SIZE 100
#define N 100

int main()
{
	char buf[SIZE] = { '\0' };
	char word[N] = { '\0' };
	
	printf("Enter the string: \n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';  //удаление \n
	printf("\nThe longest word is: %s, consisting of %d letters. \n\n", word,  getMaxWord(buf, word));

	return 0;
}