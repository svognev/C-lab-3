#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define SIZE 1000
#define WORDMAX 100
#define IN 1
#define OUT 0

int main()
{
	char string[SIZE], word[WORDMAX];
	int i, j, num_of_words, num_of_chars, border, status;
	printf("Enter your string:\n");
	fgets(string, SIZE, stdin);
	string[(border = strlen(string)) - 1] = ' ';
	puts(" ");

	for (i = j = num_of_words = num_of_chars = 0, status = OUT; i < border; i++)
	{
		if (!isspace(string[i]) && status == OUT)
		{
			status = IN;
			word[j] = string[i];
			num_of_chars = 1;
			j++;
		}
		else if (!isspace(string[i]) && status == IN)
		{
			word[j] = string[i];
			num_of_chars++;
			j++;
		}
		else if (isspace(string[i]) && status == IN)
		{
			status = OUT;
			word[j] = '\0';
			printf("%s, chars: %d", word, num_of_chars);
			num_of_words++;
			puts(" ");
			j = num_of_chars = 0;
		}
	}
	if (num_of_words)
		printf("\nYou have %d %s.\n\n", num_of_words, num_of_words == 1 ? "word" : "words");
	else
		puts("There are no words.\n"); 

	return 0;
}