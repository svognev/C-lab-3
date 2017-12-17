#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256];

	printf("Enter a text: \n");
	fgets(buf, 256, stdin);
	buf[strlen(buf) - 1] = '\0';

	printf("There are %d words\n", wordCount(buf));

	return 0;
}