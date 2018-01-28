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
    int count=0;//number of chars in one word
    int maxCount=0;
    int flag=OUT;
    char maxWord[LEN]={'\0'};
    char *p=NULL;
    p=buf;
    char *p_max=NULL;
    
    
    
    
    while(buf[i])
    {
        if(buf[i] !=' '&& flag==OUT)
        {
            
            flag=IN;
            p=(buf+i);
            maxWord[count]=buf[i];
            count++;
        }
        else if (buf[i] !=' ' && flag==IN)
        {

            maxWord[count]=buf[i];
            count++;
        }
        else if ((buf[i]==' '||buf[i]=='\0')&& flag ==IN)
        {
            flag=OUT;
            if(count>maxCount)
            {
                maxCount=count;
                p_max=p;
                
            }
            count=0;
            
        }
        i++;
   
    }
    
    if((flag=IN) && (count>maxCount))
    {
        maxCount=count;
        p_max=p;
    }
        
    
            for (i = 0; i < maxCount; i++)
            {
                word[i] = *(p_max+i);
            }
    
    word[i]='\0';
    
   

    return maxCount;
}
