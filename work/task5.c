#include<stdlib.h>
#include<stdio.h>
#define IN 1
#define OUT 0
#include "task5.h"

int getSumInt(int arr[],int N)
{
	int summ = 0, i = 0;
	
	while (arr[i] > 0)//lookout the first furst negative number
	{
		i++;
	}
			summ = arr[i];
			i++;
			while (arr[N-1] < 0)//first the last positive number
			{
				N--;
			}
			
			for (;i < N;i++)
			{
				summ += arr[i];
			}

	return summ;
}
