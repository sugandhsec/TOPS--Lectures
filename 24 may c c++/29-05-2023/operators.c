#include <stdio.h>
int main()
{
    int a, b;
    float ans;
    printf("Enter Number1: ");
    scanf("%d", &a);
    printf("Enter Number2: ");
    scanf("%d", &b);
    ans = (float)a / (float)b; //+ operator
    printf("Anser=%f", ans);
    return 0;
}
/*
89+32

x-m
+ - operators
x m 89 32 operands

Types Of operators in c
arithmetic operators + - * / %(modulus)
relational operator > < >= <= == !=
Logical Operator and(&&) or(||) not(!)
assignement operator = += -= *= /=
bitwise operator bitwise and(&) bitwise or(|) bitwise not(!) bitwise exclusive or(^) bitwise left shift(<<)
bitwise right shift(>>)

typecasting
(float)variablename


*/