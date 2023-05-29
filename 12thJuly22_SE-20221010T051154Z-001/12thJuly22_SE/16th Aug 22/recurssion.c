#include<stdio.h>

int Fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return Fibonacci(n-1)+Fibonacci(n-2); // 0 1 1 2 3 5 8 13 21
    }
}

int main()
{
    printf("%d",Fibonacci(5));
    return 0;
}