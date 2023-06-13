#include <stdio.h>
int main()
{
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum Of all Numbers: %d", sum);

    return 0;
}