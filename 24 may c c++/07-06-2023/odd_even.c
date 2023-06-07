#include <stdio.h>
int main()
{
    int num, rem;

    for (int i = 1; i <= 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        rem = num % 2;
        if (rem == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
    return 0;
}