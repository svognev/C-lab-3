
#include <stdio.h>
#include <string.h>
#define IN 1
#define OUT 0
#define SIZE 512


int main()
{
    char buf[SIZE];
    int i=0;
    int count=0;
    int letters=0;
   int flag=OUT;
    
    printf("Enter a line,please: \n");
    fgets(buf,SIZE,stdin);
    buf[strlen(buf)-1]=' ';
  
    
    
  while(buf[i])
    {
        if(buf[i] !=' '&& flag==OUT)
        {
            count++;
            flag=IN;
            putchar(buf[i]);
            letters++;
        }
        else if (buf[i] !=' ' && flag==IN)
        {
            putchar(buf[i]);
            letters++;
        }
        else if ((buf[i]==' '||buf[i]=='\0')&& flag ==IN)
        {
            flag=OUT;
    
            printf(" - %d letters in this word\n",letters);
            letters=0;
        }
            if(buf[i]=='\0')
                break;
      
        i++;
   }
    if(flag==IN){
        printf("Letters in this word - %d\n",letters);
    }
    letters=0;
    putchar('\n');
    printf("There are %d words\n",count);
    return 0;
}
