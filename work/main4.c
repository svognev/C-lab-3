/*
 * main4.c
 *
 *  Created on: 28 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <stdlib.h>
#include "task4.h"

int main(){
	char str[128];
	printf("Enter your string : ");
	fgets(str, 128, stdin);

	int i = 0;
	while(str[i] != '\n')
		i++;
	str[i] = '\0';

	printf("%d", getSum(str));

	return 0;
}
