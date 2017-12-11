#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#define N 256


int main()
{
	int i=0,j = 0;
	char line[SIZE] = { 0 };
	char count[N] = { 0 };
	char positionMax;
	int max;
	int counter = 0;
	printf("Enter a string:\n");
	fgets(line, SIZE, stdin);
	while (line[i] != '\n')
	{
		count[line[i]]++;
		i++;
	}
	for (i = 0; i < N; i++)
		if (count[i] != 0)
			counter++;

	for (i = 1; i <= counter; i++)
	{
		max = count[0];
		positionMax = 0;
		for ( j = 0; j < N; j++)
		{
			if (count[j] != 0 && count[j]>max)
			{
				max = count[j];
				positionMax = j;
			}

		}
		if (max!=0)
			printf("%c - %d\n", positionMax, max);
		count[positionMax] = 0;			
	}

	return 0;
}