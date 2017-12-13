#include<stdlib.h>
#include<stdio.h>
#define IN 1
#define OUT 0
#include "task5.h"

int getSumInt(int arr[],int N)
{
	int summ = 0, i = 0,j=0;
	while (arr[i++] > 0);//lookout the first negative number
	while (arr[N--] < 0);//lookout the last positive number

/*	while (j<i)//1part.  it's need for imaging solutions
	{
		printf(" %i",summ);
		j++;
	}*/
	i--;// the found number is not taken into account
	while (i++ < N)
			{
				summ += arr[i];
				//printf(" %i", arr[i]);//2 part. it's need for imaging solutions
			}

	return summ;
}
