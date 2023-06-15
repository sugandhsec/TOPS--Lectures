#include <stdio.h>
int main()
{
    // int a = 50;
    // int b = a;
    // printf("%d %d", a, b);
    char name[50] = "Hello World";
    // char copyname[50]=name;---error invalid initializer
    char copyname[50];
    strcpy(copyname, name);
    printf("%s %s", name, copyname);
    return 0;
}