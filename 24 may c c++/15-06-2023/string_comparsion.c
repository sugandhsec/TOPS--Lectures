#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char first[100] = "hello";
    char second[100] = "hello";
    // a = strcmp(first, second);
    a = strcmp(second, first);
    printf("%d", a);
    return 0;
}
/*
strcmp(first,second);

1---+1 when first string is greater than second string
2-- -1 when first string is smaller than second string

3--- 0 when both string is same

58>102 0
45<12 0
128>95 1

"hello">"parrot"

*/