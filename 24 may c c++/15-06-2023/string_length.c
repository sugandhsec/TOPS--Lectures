#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char name[100];
    printf("Enter Name: ");
    gets(name);
    a = strlen(name);
    printf("Lenght =%d", a);
    return 0;
}
/*
strlen() --it gives length of string

*/