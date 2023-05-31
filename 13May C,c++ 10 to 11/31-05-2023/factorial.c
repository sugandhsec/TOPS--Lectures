#include <stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial Is %d", factorial);

    return 0;
}