//
//  main.c
//  Lab_3_4
//
//  Created by Ksenia on 03.12.2017.
//  Copyright © 2017 Ksenia. All rights reserved.
//

#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>
#include"task4.h"
#define SIZE 128


int main(){
    char buf[SIZE];
   
    
    printf("Enter a string using letters and digits (max 10 characters): \n");
    fgets(buf, SIZE, stdin);
    buf[strlen(buf)-1]=' ';
   
    
    printf("%s -> %u\n",buf,getSum(buf));
   
   
    
    return 0;
        
    
}
