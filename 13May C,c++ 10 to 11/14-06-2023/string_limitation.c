#include <stdio.h>
int main()
{
    int a = 48;
    int b = a;
    char name[20] = "Hello";
    char copy_name[20] = name;
    printf("%s %s", name, copy_name);
    
    return 0;
}
/*
stringfunctions
strlen() --string length
strcpy() ----string copies into one another
strcmp() ----string comparison
strcat() ---string concatenation
strlwr() ---string lowercase
strupr() ---string uppercase
strrev()  --string reverse

*/