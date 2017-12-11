#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"
#define BUF_SIZE 100

int main()
{
	char buf[BUF_SIZE + 1] = { '\0' };
	printf("Enter your string: ");
	fgets(buf, BUF_SIZE, stdin);
	buf[BUF_SIZE - 1] = ' '; // remove '\0'
	buf[strlen(buf) - 1] = ' '; // remove '\n'
	printf("Number of words = %d\n", wordCount(buf));
	return 0;
}