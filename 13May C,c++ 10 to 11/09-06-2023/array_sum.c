#include <stdio.h>
int main()
{
    int a[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number: ");
        scanf("%d", &a[i]);
        sum = sum + a[i];
        // sum += a[i];
    }
    printf("Sum of all nu8mbers is %d", sum);

    return 0;
}