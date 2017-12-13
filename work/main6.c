#include<stdio.h>
#include<time.h>
#include "task6.h"
#define SIZE 20
#include<stdlib.h>
int main()
{
	int i,len=0 ;
	int arr[SIZE+1] = { 0 };
	srand(time(0));
	//n = N;
	for (i = 0;i <= SIZE;i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() % (1 + 9);
			break;
		case 1:
			arr[i] = -(rand() % (1 + 9) );
			break;
		}
	}

	arr[SIZE] = '\0';

	printf("random entered array of numbers :\n");
	i = 0;
	while (i < SIZE)
	{
		printf(" %i", arr[i]);
		i++;
	}
	fputs("\n", stdout);
	len = i - 1;
	printf("\nSumma between the largest number and the smallerst number =%i\n", getSumMaxMin(arr,i));
	return 0;
}
