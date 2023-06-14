#include <stdio.h>
#include <string.h>
int main()
{
    char name[500];
    printf("Enter Name: ");
    gets(name);
    printf("%s\n", strlwr(name));
    printf("%s\n", strupr(name));
    printf("%s", strrev(name));
    return 0;
}