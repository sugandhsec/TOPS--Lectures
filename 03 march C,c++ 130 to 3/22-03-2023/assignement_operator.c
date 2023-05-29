#include <stdio.h>
int main()
{
    // int a = 55;
    // a = 89;
    // int b;
    // printf("%d", b); //garbage value
    int a = 12;
    // a = a / 6;
    // a/=6; //shorthand operator
    // printf("%d", a);
    int size = sizeof(a);
    printf("%d", size); //bytes
    return 0;
}

/*
=  assignement operator
+=
-=
*=
/=
%=

b=b+89
b+=89
bit-8
1 byte---1024
1kb ----1024---
1 mb

datatype size----
int ----4
float ----4
char ---1
*/