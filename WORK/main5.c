//
//  main.c
//  lab3_5
//
//  Created by Ksenia on 07.12.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"
#define N 10

int main(int argc, const char * argv[])
{
    srand((unsigned int) time(0));
  
   int arr[N];
    
  
  //  int signed arr={-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9};
    int signed i;
 
    for(int j=0;j<1;j++)
    {
      
         for(i=0; i<N;i++)
         {
         
             if(i%2==0)
               arr[i]=rand()%(1-10+1)+1;
           else
               arr[i]=rand()%(1-10+1)*-1;
       printf("%d",arr[i]);
      
         }
 
    }
    
    
     getSumInt(arr,N);
    
    return 0;
}
