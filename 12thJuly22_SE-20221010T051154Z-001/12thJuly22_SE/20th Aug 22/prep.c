// #include "myfile1.h"
#include<stdio.h>

int main()
{
    // printf("The value of a is %d\n",a);
    // printf("The value of b is %.2f\n",b);
    // printf("The value of c is %c\n",c);
    // printf("The value of string is %s\n",s);
    // printf("The value of string is %.2f\n",PI);
    
    // Addition(4,5);
    // Multiplication(7,8);
    printf("Current line number is %d\n",__LINE__);

    printf("The name of file is %s\n",__FILE__);
    printf("Current date is %s\n
    
    
    ",__DATE__);
    printf("Current time is %s\n",__TIME__);

    return 0;
}