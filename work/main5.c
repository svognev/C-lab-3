#include<stdio.h>
#include<time.h>
#include "task5.h"
#define SIZE 20
#include<stdlib.h>
int main()
{
	int i,sum=0;
<<<<<<< HEAD
	int arr[SIZE+1] = { 0 };
	//int arr[] = { 1, -2, 3, -4, -6, 2 ,3 };
=======
	int arr[SIZE + 1] = {0};
>>>>>>> f29f345b697029718454e64bfe4856798129bf6b
	srand(time(0));
	//arr = {1,-2,2,-4,-6,2,3};
	for (i = 0;i <= SIZE;i++)
	{
		switch (rand() % 2)
		{
		case 0:
			arr[i] = rand() %(1 - 9)+1;
			break;
		case 1:
			arr[i] = -(rand() %(1 - 9)+1);
			break;
		}
	}

	arr[SIZE] = '\0';
	
	printf("random entered array of numbers :\n");
	i = 0;
	while (arr[i]!='\0')
	{
		printf(" %i",arr[i++]);
	}
	puts("\n");
	int len = i - 1;
	sum = getSumInt(arr, len);
	printf("\nresult =%i\n",sum);
	return 0;
}

