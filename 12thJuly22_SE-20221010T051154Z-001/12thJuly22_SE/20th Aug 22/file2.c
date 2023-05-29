#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("number.txt","r");
    int a;
    fscanf(ptr,"%d",&a);
    printf("The value of a is %d",a);
    fclose(ptr);
    return 0;
}