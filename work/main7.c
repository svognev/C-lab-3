/*
 * main7.c
 *
 *  Created on: 30 нояб. 2017 г.
 *      Author: michael
 */
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a,const void* b){
	if (((int*)a)[1] < ((int*)b)[1])
		return 1;
	else
		return 0;
}

int main(){
	char line[128];
	int count[128][2] = {0,0};
	int i = 0;
	printf("Enter your line : ");
	fgets(line, 128, stdin);

	for (int i = 0; i < 128; i++){
		count[i][0] += i;
	}

	while (line[i]){
		count[line[i]][1]++;
		i++;
	}

	qsort(count, 128, 2*sizeof(int), compare);

	for (int i = 0; i < 128; i++){
		if (count[i][0] > 33 && count[i][0] < 127)
			printf("%c - %d\n", (char)count[i][0],count[i][1]);
	}

	return 0;
}

