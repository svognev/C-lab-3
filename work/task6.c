#include<stdio.h>

int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int min = 0;
	int minn = 0;
	int max = 0;
	int maxx = 0;
	int i = 0;
	int j = 0;
	
	for (min = 0; min < N; min++)
	{
		if (arr[min] < minn)
		{
			minn = arr[min];
			i = min;
		}
	}
	printf("\n\nMenshiy otricatelniy element:%d\n", minn);
	for (max = 0; max < N; max++)
	{
		if (arr[max] > maxx)
		{
			maxx = arr[max];
			j = max;
		}
	}
	printf("bolshiy polojitelniy element:%d\n", maxx);
	if (i < j)
	{
		for (i++;i < j; i++)
			sum = sum + arr[i];
	}
	else
	{
		for (j++;j < i; j++)
			sum = sum + arr[j];
	}
	return sum;
}