//
//  task5.c
//  lab3_5
//
//  Created by Ksenia on 12.12.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"


int getSumInt(int arr[],const int N)
{
    
    int i=0;
    int sum=0;
  
    int first=0;//sum from first negative
    int last=0;//sum from last positive
   
    
        
        for(first=0;first<N;first++)
        {
            if(arr[first]<0)
                break;
        }
        for (last=N-1;last>first; last--)
            {
                if(arr[last]>0)
                    break;
            }
            for(i=first+1;i<last;i++)
            {
                sum+=arr[i];
            }
 
        printf("\nSum between first negative and last positive element: %d\n",sum);
    return 0;
}

