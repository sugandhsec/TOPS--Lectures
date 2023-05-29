#include <stdio.h>
int main()
{
    char sent[200];
    printf("Enter Something: ");
    gets(sent);
    int l = strlen(sent);
    printf("%d", l);
    return 0;
}