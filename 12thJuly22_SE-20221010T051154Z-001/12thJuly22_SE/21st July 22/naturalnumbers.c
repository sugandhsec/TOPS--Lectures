#include<stdio.h>

int main()
{
    int i,sum = 0,n;
    printf("Enter the number for which you want sum: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        // sum +=i;
        sum = sum+i; // 0+1+2+3+..+10
    }
    printf("Sum of %d natural numbers is %d",n,sum);
    return 0;
}