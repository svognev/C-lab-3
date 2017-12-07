/*
 * main3.c
 *
 *  Created on: 27 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <stdlib.h>
#include "task3.h"


int main(){
	char str[128];
	char word[64];
	printf("Enter your string : ");
	fgets(str,128, stdin);
	int i = 0;
	while (str[i])
		i++;
	str[i-1] = '\0';
	printf("%s %d",word,getMaxWord(str,word));

	return 0;
}
