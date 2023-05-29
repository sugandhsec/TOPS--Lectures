#include <stdio.h>

int main()
{
    // && -> AND
    // || -> OR
    // ! -> NOT

    int a = 5;
    // AND operator
    // true + true = true
    // printf("%d \n", (a < 7) && (a > 3));  
    // printf("%d \n", (a < 4) && (a > 3));
    // printf("%d \n", (a > 4) && (a < 1));
    // printf("%d \n", (a < 5) && (a > 5));


    // OR operator
    // false + false = false
    // printf("%d \n", (a < 7) || (a > 3));  
    // printf("%d \n", (a < 4) || (a > 3));
    // printf("%d \n", (a > 4) || (a < 1));
    // printf("%d \n", (a < 5) || (a > 5));

    // NOT operator
    printf("%d \n",!(a==5));
    printf("%d \n",!(a!=5));
    return 0;
}