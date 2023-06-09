#include <stdio.h>
int main()
{
    int a[5], b[5], ans[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        ans[i] = a[i] + b[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}