#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
#include"task1.h"

#define N 100

int main()
{
 	char str[N] = {0};
	
	printf("Enter str: \n");
	fgets(str, N, stdin);
	
	printf("Number of words - %d\n", wordCount(str));

	return 0;
}

