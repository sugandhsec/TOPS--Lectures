#include<stdio.h>

int main()
{
    int i,a=0,b=1,c;
    printf("%d %d ",a,b);
    for(i=3;i<=15;i++){
        c = a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}