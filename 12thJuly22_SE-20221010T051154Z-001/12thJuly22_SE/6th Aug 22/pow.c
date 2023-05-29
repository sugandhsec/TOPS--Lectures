#include<stdio.h>
// #include<math.h>

int main()
{
    int b,p,res=1;
    printf("Enter the value of the base: ");
    scanf("%d",&b);
    printf("Enter the value of the power: ");
    scanf("%d",&p);
    int pow = p;
    while(p!=0){
        res = res*b;
        p--;
    }

    // res = pow(b,p);
    printf("%d^%d = %d",b,pow,res);
    return 0;
}