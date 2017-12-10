#include <stdio.h>
#include <stdlib.h>

int getSumMaxMin(int buf[], int N) 
{
	int i = 0, j = 0;
	int sum = 0;
	int min = 0;
	int max = 0;
	for (i = 1; i < N; i++) {
		if (buf[i] < buf[min]) min = i;
		else if (buf[i] > buf[max]) max = i;
	}
	//printf("min %d, max %d\n", buf[min], buf[max]);

	if (min > max) {
		i = min;
		min = max;
		max = i;
	}

	sum = 0;
	for (i = min + 1; i<max; i++)
		sum += buf[i];
	
	return sum;
}
