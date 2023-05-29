#include<stdio.h>

int Fact(int n){
    int i,fact=1;
    for(i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main()
{
    printf("%d",Fact(5)+Fact(6));   // 120+720
    return 0;
}