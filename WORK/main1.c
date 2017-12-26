
#include <stdio.h>
#include <string.h>
#include "task1.h"
#define IN 1
#define OUT 0
#define SIZE 512



int main(int argc, const char * argv[]) {
    char buf[SIZE];
    printf("Enter a line,please: \n");
    fgets(buf,SIZE,stdin);
    
    wordCount(buf);
    return 0;
}
