/*
 * main1.c
 *
 *  Created on: 27 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main(){
	char str[128] = {' '};

	printf("Enter your string : \n");
	fgets(str, 128, stdin);
	int i = 0;
	while(str[i]!='\n')
		i++;
	str[i] = '\0';
	printf("words count : %d", wordCount(str));

	return 0;
}
