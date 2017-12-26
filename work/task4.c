#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>
#include"task4.h"
#define SIZE 100
#define IN 1
#define OUT 0

int getSum(char buf[])

{
    
    unsigned int value=0;
    unsigned int sum=0;
    int flag=OUT;
    
    int i=0;
    int count=0;
    
    while(buf[i])
    {
        if(isdigit(buf[i]) && flag==OUT)
        {
            do
            {
                flag=IN;
                value=value*10+buf[i]-'0';
                count++;
                i++;
                
            }
            while (isdigit(buf[i]));
            
            
            if(count==10)
            {
                break;
            }
            
        }
        if(isalpha(buf[i]))
        {
            i++;
            flag=OUT;
            
        }
        
        i++;
        
        sum+=value;
        value=0;
        count=0;
        
        
    }
    
    return sum;
    
}


