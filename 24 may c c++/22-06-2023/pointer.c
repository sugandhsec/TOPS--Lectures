#include <stdio.h>
int main()
{
    int a = 50;
    int *t = &a;
    printf("%d %p", a, t);

    return 0;
}
/*
int variablename;
int *pointername=&variable;

*/