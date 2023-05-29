#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==1 || n==2){
        printf("Number is prime");
    }
    else{
        for(i=2;i<=n-1;i++){  
            if(n%i==0){
                printf("Number is Not prime");
                break;
            }
            else{
                printf("Number is Prime");
                break;
            }
        }
    }
    return 0;
}