#include<stdio.h>
#include<string.h>

int main()
{
    char s1[20] = "Good ";
    char s2[20] = "Morning ";
    char s3[20] = "Everyone";
    strcpy(s2,s1);
    printf("%s",s2);
    // strcat(s1,s3);
    return 0;
}