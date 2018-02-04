//
//  main.c
//  lab3_6
//
//  Created by Ksenia on 13.12.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"
#define N 10

int main(int argc, const char * argv[])
{
    srand((unsigned int) time(0));
    
    int arr[N];
    
    
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
	getSumMaxMin(arr, N);
	//printf("\n%d\n", getSumMaxMin(arr,N));
	
    return 0;
}

