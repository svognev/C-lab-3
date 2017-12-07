/*
 * task4.c
 *
 *  Created on: 28 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>


int getSum(char buf[]){
	int i = 0, j = 0;
	int count = 0;
	int in_int = 0;
	int len_int = 0;
	int sum = 0;
	char str_int[64];
	while(buf[i] && count < 1){
		if (in_int == 0 && buf[i] >= '0' && buf[i] <= '9'){
			in_int = 1;
			str_int[j] = buf[i];
			len_int++;
			j++;
			i++;
		}else if (in_int == 1 && (buf[i] < '0' || buf[i] > '9')){
			in_int = 0;
			count++;
		}else if (in_int == 1 && buf[i] >= '0' && buf[i] <= '9'){
			in_int = 1;
			str_int[j] = buf[i];
			len_int++;
			j++;
			i++;
		}else{
			i++;
		}
	}
	str_int[j] = '\0';
	if (len_int > 0 && count == 0)
		count++;


	if (count){
		if (len_int > 9){
				str_int[8] = '\0';
				sscanf(str_int,"%d", &sum);
				return sum + getSum(buf+8);
			}
		sscanf(str_int,"%d", &sum);
		return sum + getSum(buf+i);
	}else{
		return sum;
	}
}
