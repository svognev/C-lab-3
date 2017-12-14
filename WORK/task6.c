
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"



int getSumMaxMin(int arr[],int N)
{
 
        
       int i=0;
        int sum=0;
        
    int max;
    int min;
    int index_min=0;
    int index_max=0;
    max=min=arr[0];
    
    
    for(i=0;i<N;i++)
    {
        if(arr[i]>max)
        {
             index_max=i;
            max=arr[i];
           
        }
       
        if(arr[i]<min)
        {
            index_min=i;
            min=arr[i];
        
        
        }
    
    }
 
  
  
    if(index_min>index_max)
    {
    for(i=index_max+1;i<index_min;i++)
   
        sum+=arr[i];
    }
    
    
    
    
    if(index_min<index_max)
    {
        for(i=index_min+1;i<index_max;i++)
        
            sum+=arr[i];
    }
  
        printf("\n%d\n",sum);
    printf("\nSum between maximum %d (arr[%d]) and minimum %d (arr[%d]) elements is: %d\n",max,index_max,min,index_min,sum);
    
    
   
 
       return 0;
    
}
