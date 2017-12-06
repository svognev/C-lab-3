/*
 * task1.c
 *
 *  Created on: 27 нояб. 2017 г.
 *      Author: michael
 */


int wordCount(char buf[]){
	int in_word = 0;
	int count = 0;
	int i = 0;

	while(buf[i]){
		if (buf[i] != ' ' && in_word == 0){
			in_word = 1;
			count++;
			i++;
		}else if (buf[i] == ' ' && in_word == 1){
			in_word = 0;
			i++;
		}else{
			i++;
		}
	}

	return count;
}
