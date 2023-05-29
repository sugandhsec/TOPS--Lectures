#include<stdio.h>

int main()
{
    int n=843685,even =0,odd=0,rem;
    while(n!=0){
        rem = n%10;
        if(rem%2==0){
            even = even + rem;
        }
        else{
            odd =odd+rem;
        }
        n/=10;
    }
    printf("Addition of Even digits is %d\n",even);
    printf("Addition of Odd digits is %d\n",odd);
    return 0;
}