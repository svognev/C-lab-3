#include <stdio.h>
#include <string.h>
#include "task3.h"
#define IN 1
#define OUT 0
#define N 256
#define LEN 100



int getMaxWord(char buf[],char word[])
{
    
    int i=0;
    int count=0;
    int letters=0;
    int flag=OUT;
   // int len=0;
    char maxWord[LEN]={'\0'};
    size_t len=strlen(word);
    

    
    
    while(buf[i])
    {
        if(buf[i] !=' '&& flag==OUT)
        {
         
            flag=IN;
           
            maxWord[count]=buf[i];
            letters++;
            count++;
        }
        else if (buf[i] !=' ' && flag==IN)
        {
           
            letters++;
            maxWord[count]=buf[i];
            count++;
        }
        else if ((buf[i]==' '||buf[i]=='\0')&& flag ==IN)
        {
            flag=OUT;
            count=0;
        
        }
        len=strlen(maxWord);
        for(int x=0;x<len;x++)
        {
            word[x]=maxWord[x];
        }
        
       
        
        
        if(buf[i]=='\0')
            break;
        
        i++;
    }

     printf("lenght of max_word %s: %1ld\n",word,strlen(word));
    return 0;
}
