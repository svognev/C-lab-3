

#include<stdio.h>
#include<stdio.h>
#include<string.h>
#define IN 1
#define OUT 0
#define SIZE 512
int main()
{
	char buf[SIZE];
	int flag = OUT;
	int i = 0,countLenght=0;
	int count = 0;
	printf("Enter a line of symbols with gaps:\n");
	fgets(buf, SIZE, stdin);
	buf[strlen(buf) - 1] = ' ';//  THE NUmber of the letters of the string
	putchar('\n');
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN;//enter inside of word
			putchar(buf[i]);// print the first letter of word
			countLenght++; //count lenght of the word
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			putchar(buf[i]);// print followings letters of the word
			countLenght++;
		}

		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT;// exit outside of the word
			printf("    lenght of the word =%i\n",countLenght);
			//putchar('\n');// go  to new line for new the word
			countLenght = 0;
		}
		i++;
	}
	putchar('\n');
	printf("%d word\n", count);
	return 0;
}
