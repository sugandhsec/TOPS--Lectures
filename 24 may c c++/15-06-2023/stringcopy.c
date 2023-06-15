#include <stdio.h>
int main()
{
    char some[50] = "demo";
    char name[50];
    // name = "hello World";
    strcpy(name, some);
    // name = demo;
    // strcpy(name, demo);
    printf("%s ", name);
    return 0;
}
/*
int a;
a=50;
a=b;
strcpy(a,50)
strcpy(a,b)
*/