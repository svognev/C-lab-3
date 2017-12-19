#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256] = { '0' };
	char word[256] = { '\0' };

	printf("Enter a text: \n");
	fgets(buf, 256, stdin);
	buf[strlen(buf) - 1] = '\0';
	
	printf("%s is the longest word with %d symbols\n", &word, getMaxWord(buf, word));

	return 0;
}