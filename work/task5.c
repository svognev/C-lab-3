#include <stdio.h>
#include <stdlib.h>

int getSumInt(int buf[], int N)
{
	int i = 0, j = 0;
	int p = 0; // count positive 
	int n = 0; // count negative 
	int sum = 0;
	int ch = 0;

	for (i = 0; i < N; i++)
	{
		if (buf[i] < 0)
		{
			n = i; break;
		}
	}
	for (j = N; j > i; j--)
	{
		if (buf[j] >= 0)
		{
			p = j; break;
		}
	}

	for (i = n + 1; i < p; i++)
	{
		sum += buf[i];
	}

		return sum;
}
