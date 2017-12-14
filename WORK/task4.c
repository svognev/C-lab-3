//
//  task4.c
//  Lab_3_4
//
//  Created by Ksenia on 12.12.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//
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
        if(isdigit(buf[i]))
        {
            do
            {
            value=value*10+buf[i]-'0';
            count++;
            i++;
            flag=IN;
            }
            while (isdigit(buf[i]));
                
         
           flag=IN;
 
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
