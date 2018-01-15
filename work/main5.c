#include <stdio.h>
#include <time.h>
#include "task5.h"
#define SIZE 5
#define MIN -9
#define MAX 9

int main()
{
	int arr[SIZE] = { 0 };
	srand(time(NULL));
	gen_arr(arr, MIN, MAX, SIZE);
	printf("Sum = %d\n", getSumInt(arr, SIZE));
	return 0;
}