#include<stdio.h>

int main()
{
    // 2 methods to initialize a string

    // char s[20] = {'h','e','l','l','o','\0'};
    // char s[20] = "HELLO";
    // printf("%s",s);


    // Reading string from the terminal
    char s[20];
    printf("Enter a string: ");
    gets(s);
    // puts(s);
    // scanf("%s",s);
    printf("%s",s);
return 0;
}