#include<stdlib.h>
#include<stdio.h>
#define IN 1
#define OUT 0
#include "task5.h"

int getSumInt(int arr[],int N)
{
<<<<<<< HEAD
	int summ = 0, i = 0,j=0, max=0,min=0;
	for (;i < N;i++)//lookout the first negative number
=======
	int summ = 0, i = 0,j=0;
	
	while (arr[i++] >= 0);//lookout the first negative number
	while (arr[N--] <= 0);//lookout the last positive number
	while (j<i)//1part.  it's need for imaging solutions
>>>>>>> f29f345b697029718454e64bfe4856798129bf6b
	{
		printf(" %i",summ);
		j++;
	}
<<<<<<< HEAD
	
		for (;(N >= i );N--)//lookout the last positive number
		{
			if (arr[N] > 0) {
				max = arr[N];
				break;
			}
		}
	
	
		printf("min= %i   ",min);
	
	
		for (;i < N;i++)
			{
				summ = summ+arr[i];
				printf(" %i", arr[i]);//2 part. it's need for imaging solutions
			}
	printf("    max= %i\n", max);
=======
	//i--;// the found number is not taken into account
	while (i <=N)
			{
				summ += arr[i];
				printf(" %i", arr[i++]);//2 part. it's need for imaging solutions
			}
	fputs(" // it's number for summ", stdout);
>>>>>>> f29f345b697029718454e64bfe4856798129bf6b
	return summ;
}
