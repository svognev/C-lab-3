#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task4.h"

#define N 50
#define LEN_DIGIT 2

int main()
{
	char str[N];
	int num = 0, len_str=0;

	printf("Enter str: \n");
	fgets(str,N, stdin);
	len_str = strlen(str);
	str[len_str - 1] = '\0';
	
	printf("sum - %d\n", getSum(str));
	
	return 0;
}
