/*
 * main2.c
 *
 *  Created on: 27 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <stdlib.h>


int main(){
	char str[128] = {' '};
	int in_word = 0;
	int len = 0;

	printf("Enter your string : \n");
	fgets(str, 128, stdin);
	int i = 0;
	while(str[i]!='\n')
		i++;
	str[i] = '\0';

	i = 0;
	while(str[i]){
		if (str[i] != ' ' && in_word == 0){
			putchar(str[i]);
			in_word = 1;
			len++;
			i++;
		}else if (str[i] == ' ' && in_word == 1){
			printf(" %d\n", len);
			len = 0;
			in_word = 0;
			i++;
		}else if (str[i] != ' ' && in_word == 1){
			putchar(str[i]);
			len++;
			i++;
		}else{
			i++;
		}
	}

	if (in_word == 1)
		printf(" %d\n", len);


	return 0;
}
