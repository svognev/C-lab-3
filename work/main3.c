#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task3.h"

#define N 100

int main()
{
	int len = 0;
	char buf[N] = { 0 };
	char word[N] = { 0 };

	printf("Enter line \n");
	fgets(buf, N, stdin);
	len = strlen(buf);
	buf[len - 1] = '\0 ';

	printf("Max word: %s - %d  \n", word, getMaxWord(buf, word));

	return 0;
}
