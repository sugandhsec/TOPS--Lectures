#include <stdio.h>
int main()
{
    int n, sum = 0, even_sum = 0, odd_Sum = 0;
    printf("enter Size of array: ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENter value: ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] % 2 == 0)
        {
            printf("%d is even\n", array[i]);
            even_sum = even_sum + array[i];
        }
        else
        {
            printf("%d is odd\n", array[i]);
            odd_Sum = odd_Sum + array[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    printf("Summ of all even is %d\n", even_sum);
    printf("Summ of all odd is %d\n", odd_Sum);
    printf("Summ of all digit is %d\n", sum);
    return 0;
}