#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        // if (a > c)
        // {
        //     printf("A");
        // }
        // else
        // {
        //     printf("C");
        // }
        a < c ? printf("A") : printf("C");
    }
    else
    {
        if (b > c)
        {
            printf("B");
        }
        else
        {
            printf("C");
        }
    }

    return 0;
}