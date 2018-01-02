#include<stdio.h>

int getSumInt(int arr[], int N)
{
	int sum = 0;
	int min = 0;
	int max = 0;
	int i = 0;
	int j = 0;

	for (min = 0; min < N; min++)
	{
		if (arr[min] < 0)
		{
			printf("\n\nPerviy otricatelniy element:%d\n", arr[min]);
			i = min;
			break;
		}
	}
	for (max = N; max > 0; max--)
	{
		if (arr[max] > 0)
		{
			printf("Posledniy polojitelniy element:%d\n", arr[max]);
			j = max;
			break;
		}
	}
	if (i < j)
	{
		for (i++; i < j; i++)
			sum = sum + arr[i];
	}
	else
	{
		for (j++; j < i; j++)
			sum = sum + arr[j];
	}
	return sum;
}