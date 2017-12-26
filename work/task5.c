#include<stdio.h>

int getSumInt(int arr[], int N)
{
	int sum = 0;
	int min = 0;
	int max = 0;
	int i = 0;
	for (min = 0; min < N; min++)
	{
		if (arr[min] < 0)
		{
			printf("\n\nPerviy otricatelniy element:%d\n", arr[min]);
			break;
		}
	}
	for (max = N; max > min; max--)
	{
		if (arr[max] > 0)
		{
			printf("Posledniy polojitelniy element:%d\n", arr[max]);
			break;
		}
	}
	for (i = min+1; i < max; i++)
		sum = sum + arr[i];
	return sum;
}