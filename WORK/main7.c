
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
#define N 26


int cmp(const void *a,const void *b){
    return *(int*)a-*(int*)b;
}


int main() {
    int i=0;
    char buf[SIZE];
    int count[N]={0};
    
    int max=0;

    srand((unsigned int) time(NULL));
    
    for(i=0;i<SIZE-1;i++)
    buf[i]=rand()%('Z'-'A'+1)+'A';
    buf[SIZE-1]='\0';
 //  puts(buf);
    

    i=0;
  
        while (buf[i] !='\0')
        {
            count[buf[i]-'A']++;
            i++;
        }
    
   for(i=0;i<N;i++)
   {
       if(count[i]>max)
           max=count[i];
       if(count[i]>0)
            printf("%c-%d\n",i+'A',count[i]);
   }
    
    printf("Max frequency: %d  %c\n",max,(char)i);
       
  
  
    for(i=0;i<N;i++)
        
    {
       if(count[i]==max)
     
        printf("%c-%d\n",i+'A',count[i]);
     }


 
  printf("Sorted:\n");

    qsort(count,N,sizeof(int),cmp);
   for(i=0;i<N;i++)
   {
       printf("%d\n", count[i]);
       
    }

    
    return 0;
            
        
    
}
