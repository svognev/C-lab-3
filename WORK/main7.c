
#include <stdio.h>
#include <string.h>
#define SIZE 256

int main()
{
    int letter[SIZE];//for letters
    int temp[SIZE];// for frequency
    char str[SIZE]={0};
    int i,j,k;
    
    
    for (i=0; i<SIZE; i++)
    {
        letter[i]=i;
        temp[i]=0;
    }
    
    printf("Enter a string of charackters: \n");
    fgets(str, SIZE, stdin);
    
    for (i=0; i<strlen(str)-1; i++)
    {
        k=str[i];
        temp[k]++;
    }
    for (i=0; i<SIZE; i++)
        for (j=i+1; j<SIZE; j++)
            if (temp[j] > temp[i])
            {
                k=temp[j];
                temp[j]=temp[i];
                temp[i]=k;
                k=letter[j];
                letter[j]=letter[i];
                letter[i]=k;
            }
    for (i=0; i<SIZE; i++)
        if(temp[i])
            printf("%c - %d\n",letter[i],temp[i]);
    
    return 0;
}

