#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define STR_LEN 100
#define NUM_SUM 128

int main()
{
	char buf[STR_LEN] = { '\0' };
	int count[NUM_SUM] = { 0 };
	char begSym = 0, endSym = NUM_SUM - 1;
	int i = 0, maxCount = 0;

	printf("Enter a string of length less or equal to %d: ", STR_LEN - 1);
	fgets(buf, STR_LEN, stdin);
	buf[strlen(buf) - 1] = '\0';

	for (i = 0; buf[i]; i++)
		count[buf[i] - begSym]++;

	for (i = 0; i < NUM_SUM; i++)
		if (count[i] > maxCount)
			maxCount = count[i];

	printf("Table of printed characters occurrence:\n");

	while (maxCount)
	{
		for (i = 0; i < NUM_SUM; i++)
			if ((count[i] == maxCount) &&
				(count[i] > 0) &&
				((i + begSym) >= ' ') &&
				((i + begSym) <= '~'))
				printf("\"%c\" - %d times\n", i + begSym, count[i]);
		maxCount--;
	}

	return 0;
}