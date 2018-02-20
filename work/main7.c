#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100
#define CSIZE 128

int main()
{
	int max = 0;
	int symbols = 0;
	int i = 0, j = 0;
	char symbol;
	char line[SIZE] = { 0 };
	char count[CSIZE] = { 0 };
	printf("Enter a line:\n");
	fgets(line, SIZE, stdin);
	while (line[i] != '\n')
	{
		count[line[i]]++;
		i++;
	}
	for (i = 0; i < CSIZE; i++)
	{
		if (count[i] > 0)
			symbols++;
	}
	for (i = 0; i < symbols; i++)
	{
		max = 0;
		symbol = 0;
		for (j = 0; j < CSIZE; j++)
		{
			if (count[j] != 0 && count[j]>max)
			{
				max = j;
				symbol = j;
			}
		}
		printf("%c - %d\n", symbol, count[max]);
		count[max] = 0;
	}
	return 0;
}
