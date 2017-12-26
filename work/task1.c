//
//  task1.c
//  lab3_1
//
//  Created by Ksenia on 12.12.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//
#include <stdio.h>
#include <string.h>
#include "task1.h"
#define IN 1
#define OUT 0
#define SIZE 512


int wordCount(char buf[]){
    
    int flag=OUT;
    int i=0;
    int count=0;
    buf[strlen(buf)-1]='\0';
    
    
    while(buf[i])
    {
        if(buf[i]!=' '&& flag==OUT)
        {
            count++;
            flag=IN;
        }
        else if(buf[i]==' '&& flag==IN)
            flag=OUT;
        i++;
        
    }
    printf("%d words\n",count);
    return 0;
    
}
