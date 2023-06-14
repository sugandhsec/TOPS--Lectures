#include <stdio.h>\
#include<string.h>
int main()
{
    char first[100] = "Hello I am ";
    char second[100] = "learning C and C++";
    // strcat(first, second);
    // printf("%s\n %s", first, second);
    strcat(second, first);
    printf("%s\n %s", first, second);

    return 0;
}