#include<stdio.h>

int main()
{
    char s[200]="$welcome To , toPs technologies";
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = s[i]-3
            2;
        }
    }
    printf("%s",s);
    return 0;
}