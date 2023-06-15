#include <stdio.h>
#include <string.h>
int main()
{
    char a[100] = "hello";
    char b[100] = "world";
    // strcat(a, b);
    // strcat(b, a);
    printf("%s\n%s", a, b);
    return 0;
}