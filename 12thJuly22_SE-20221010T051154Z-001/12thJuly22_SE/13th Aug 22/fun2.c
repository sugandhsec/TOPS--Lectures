#include<stdio.h>

void Addition(int a,int b){
    printf("Addition of %d and %d is %d\n",a,b,a+b);
}
void Subtraction(int a,int b){
    printf("Subtraction of %d and %d is %d\n",a,b,a-b);
}
void Multiplication(int a,int b){
    printf("Multiplication of %d and %d is %d\n",a,b,a*b);
}
void Division(int a,int b){
    printf("Division of %d and %d is %d\n",a,b,a/b);
}


int main()
{
    Multiplication(5,7);
    Division(10,5);
    Subtraction(9,5);
    Addition(4,6);
    Addition(24,54);
    return 0;
}