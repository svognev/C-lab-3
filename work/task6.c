#include <stdlib.h>

// Ќахождение максимального числа в массиве arr размера N
int max_el(int arr[], int N)
{
	int ind = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > arr[ind])
			ind = i;
	}
	return ind;
}

// Ќахождение минимального числа в массиве arr размера N
int min_el(int arr[], int N)
{
	int ind = 0;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < arr[ind])
			ind = i;
	}
	return ind;
}
// Ќахождение суммы чиел в массиве arr от минимального до максимального
int getSumMaxMin(int arr[], int N)
{
	int sum = 0;
	int min = min_el(arr, N);
	int max = max_el(arr, N);
	
	if (min < max)
	{ 	
		for (int i = min + 1; i < max; i++)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
	else if (max > min)
	{
		for (int i = max - 1; i > min; i--)
		{
			sum = sum + arr[i];
		}
		return sum;
	}
}

