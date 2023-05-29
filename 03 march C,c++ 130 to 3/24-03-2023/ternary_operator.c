#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
    // num % 2 == 0 ? printf("Even") : printf("odd");
    return 0;
}
/*
ternary operator
condition ? True : false
?:

*/