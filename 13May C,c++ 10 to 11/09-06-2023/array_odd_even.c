#include <stdio.h>
int main()
{
    int a[10], even_total = 0, odd_total = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("%d is Even\n", a[i]);
            even_total = even_total + a[i];
        }
        else
        {
            printf("%d is Odd\n", a[i]);
            odd_total = odd_total + a[i];
        }
    }
    printf("EVEn total is %d\n", even_total);
    printf("ODD total is %d\n", odd_total);

    return 0;
}