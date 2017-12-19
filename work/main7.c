#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 512  
#define N 256

int main()
{
	int i = 0;
	int maxcount = 0;
	char line[SIZE];
	int count[N] = { 0 };

	printf("Enter string from symbols: \n");
	fgets(line, SIZE, stdin);
	
	while (line[i] != '\n')
	{
		count[line[i]]++;
		i++;
	}	
	
	for (i = 0; i < N; i++)                    
	{
		if (count[i] > maxcount)
			maxcount = count[i];
	}

	while (maxcount > 0)
	{
		for (i = 0; i < N; i++)
		{
			if (count[i] == maxcount)
				printf("%c - %d\n", i, count[i]);
		}		
		maxcount--;
	} 

	return 0;
}