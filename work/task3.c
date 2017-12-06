/*
 * task3.c
 *
 *  Created on: 27 нояб. 2017 г.
 *      Author: michael
 */


int getMaxWord(char buf[],char word[]){
	char local_word[64];
	int in_word = 0;
	int count = 0;
	int len = 0;
	int i = 0, j = 0, k = 0;
	while (count < 1 && buf[i]){
		if (in_word == 1 && buf[i] == ' '){
			count++;
		}else if(in_word == 0 && buf[i] != ' '){
			local_word[j] = buf[i];
			in_word = 1;
			len++;
			i++;
			j++;
		}else if(in_word == 1 && buf[i] != ' '){
			local_word[j] = buf[i];
			len++;
			j++;
			i++;
		}else{
			i++;
		}
	}
	if (len != 0){
		local_word[j] = '\0';
		count++;
	}

	if (count == 0){
		return 0;
	}else{
		char next_word[64];
		int next_word_len = getMaxWord(buf+i,next_word);
		if (len > next_word_len){
			while (local_word[k]){
				word[k] = local_word[k];
				k++;
			}
			word[k] = '\0';
			return len;
		}else
			k = 0;
			while (next_word[k]){
				word[k] = next_word[k];
				k++;
			}
			word[k] = '\0';
			return next_word_len;

	}
}

