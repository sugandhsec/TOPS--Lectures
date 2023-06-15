#include <stdio.h>
#include<string.h>
int main()
{
    char name[50];
    printf("Enter Name: ");
    gets(name);
    // printf("Lowercase= %s", strlwr(name));
    // printf("Lowercase= %s", strupr(name));
    printf("Lowercase= %s", strrev(name));
    return 0;
}