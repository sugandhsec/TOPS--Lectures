#include <stdio.h>
int main()
{
    int num, rem;
    printf("Enter number: ");
    scanf("%d", &num);
    // rem = num % 2;
    // if (num % 2 == 0)
    // {
    //     printf("Even");
    // }
    // else
    // {
    //     printf("ODD");
    // }
    // ternary operator ?:
    // condition?body of id: body of else
    num % 2 == 0 ? printf("even") : printf("ODD");

    return 0;
}