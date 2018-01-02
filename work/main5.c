#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"
#define MAX 20

int main()
{
	int buf[MAX] = { 0 };
	srand(time(0));
	
	for (int i = 0; i < MAX; i++)
	{
		if (rand() % 2 == 0)
		{
			buf[i] = rand() % 100;
		}
		else
		{
			buf[i] = -rand() % 100;
		}
		printf("%0.2d ", buf[i]);
	}
	
	printf("\nSumma chisel:%d\n", getSumInt(buf, MAX));
	return 0;
}