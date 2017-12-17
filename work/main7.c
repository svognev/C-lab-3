#include <stdio.h>
#include <string.h>
#define SIZE 1000
#define N 256

int main()
{
	char buf[SIZE] = { 0 };
	int count[N] = { 0 };
	int max = 0;
	int i = 0, j = 0, k = 0;
	
	printf("Enter some text: \n");
	fgets(buf, SIZE, stdin);

	for (j = 0; j < N; j++)
	{
		if (buf[j] == '\n') 
		{
			buf[j] = '\0';
			break;
		}
	}

	while (buf[i] != '\0')
	{
		count[buf[i] - '0']++;
		i++;
	}

	for (i = 0; i < N; i++)
	{
		if (count[i] > max)
			max = count[i];
	}

	while (max > 0)
	{
		for (k = 0; k < N; k++)
		{
			if (count[k] == max)
				printf("%c-%d\n", k + '0', count[k]);
		}
		max--;
	}

	return 0;
}