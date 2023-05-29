#include<stdio.h>

int main()
{
    int n=36567,rem,r;
    r = n%10;   // 9
    n/=10;
    r = n%10;  // 6
    while(n!=0){
        rem = n%10; //  9 7 6 5 6 3
        n/=10;
    }
    printf("Addition of first and last digit is %d",r+rem);
    return 0;
}