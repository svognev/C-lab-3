#include <stdio.h>
#include <string.h>
#include "task3.h"
#define IN 1
#define OUT 0
#define N 512


int main()
{
    char buf[N];
  
	char word[100] = {0};
    
    printf("Enter a line,please: \n");
    fgets(buf,N,stdin);
    buf[strlen(buf)-1]=' ';
	buf[N - 1] = ' ';

    printf("The longest word is: %s\n contain %d chars\n", word, getMaxWord(buf,word));
    return 0;

   
}
