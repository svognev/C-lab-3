#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
#define CHARSET 128

int main()
{
	int i, max;
	char string[SIZE];
	int freq[CHARSET] = { 0 };

	puts("Enter your string:");
	fgets(string, SIZE, stdin);

	for (i = 0; string[i] != '\n'; i++)
		freq[string[i]]++;
	for (i = 0, max = 0; i < CHARSET; i++)
	{
		if (freq[i] > max)
			max = freq[i];
	}
	puts(" ");
	for (; max > 0; max--)
	{
		for (i = 0; i < CHARSET; i++)
		{
			if (freq[i] == max)
				printf("'%c' - %d\n", i, freq[i]);
		}
	}
	puts(" ");
	return 0;
}