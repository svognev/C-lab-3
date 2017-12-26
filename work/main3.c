#include <stdio.h>
#include <string.h>
#include "task3.h"
#define IN 1
#define OUT 0
#define N 512


int main()
{
    char buf[N];
  
    char word[N];
    
    printf("Enter a line,please: \n");
    fgets(buf,N,stdin);
    buf[strlen(buf)-1]=' ';
    
  getMaxWord(buf,word);

   
}
