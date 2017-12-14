#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task3.h"
#define BUF_SIZE 100

int main()
{
	char buf[BUF_SIZE + 1] = { '\0' };
	char word[BUF_SIZE + 1] = { '\0' };

	printf("Enter your string: ");
	fgets(buf, BUF_SIZE, stdin);
	buf[BUF_SIZE - 1] = '\0'; // remove '\0'
	buf[strlen(buf) - 1] = '\0'; // remove '\n'

	int maxLenWord = getMaxWord(buf, word);
	printf("%s, len = %d", word, maxLenWord);

	return 0;
}