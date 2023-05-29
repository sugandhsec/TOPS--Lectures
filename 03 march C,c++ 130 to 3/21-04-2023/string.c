#include <stdio.h>
int main()
{
    char name[20]; //{'s','u','g','a'} "vhuhbjrutn\0"
    // \0 nullcharacter or string terminating character
    printf("ENter Detail: ");
    // scanf("%s", name);
    gets(name);//get string
    printf("%s", name);
    return 0;
}
/*
string is nothing but array of characters

*/