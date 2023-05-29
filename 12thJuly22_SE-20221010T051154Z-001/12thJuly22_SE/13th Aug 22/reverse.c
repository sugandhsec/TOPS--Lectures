#include<stdio.h>
#include<string.h>

int main()
{
    // int i;
    char s[20] = "hello";
    // int l = strlen(s);
    // for(i=l;i>=0;i--){
    //     printf("%c",s[i]);
    // }

    strrev(s);
    printf("%s",s);

    return 0;
}