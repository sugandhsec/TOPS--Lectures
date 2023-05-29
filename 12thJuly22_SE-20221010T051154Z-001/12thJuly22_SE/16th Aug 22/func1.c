#include<stdio.h>

float Addition(){
    float a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    return a+b;
}

int main()
{
    int qty;
    qty = Addition() + 200;
    printf("%d",qty);
    return 0;
}
