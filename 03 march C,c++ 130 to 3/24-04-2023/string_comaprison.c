#include <stdio.h>
int main()
{
    char string1[50] = "wo";
    char string2[50] = "wop";
    // int a = strcmp(string1, string2);
    int a=strcmp(string2,string1);
    printf("%d", a);
    return 0;
}
/*
strcmp(firststring,scondstring)
comparison is done on ASCII value
0--when both string are equal
1---when first string is greater than second one
-1---when first string is smaller than second one

*/