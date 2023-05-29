#include<stdio.h>

int main()
{
    //  14683
    int n = 632678,sum=0,rem;
    while(n!=0){
        rem = n%10;   //  4 8 6 5 2
        sum = sum+rem;  // 0+4+8+6+5+2
        n/=10;   //  
    }
    printf("Addition of individual digits is %d",sum);
    return 0;
}