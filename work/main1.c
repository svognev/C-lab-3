#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "task1.h"
#define SIZE 512

int main()
{
	char buf[SIZE];
	int count = 0;
	
	printf("Enter a line, please:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = '\0';

	printf("You enter %d words\n", wordCount(buf));

	return 0;
}