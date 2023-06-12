#include <stdio.h>
int main()
{
    int k = 0, l = 4;
    for (int j = 1; j <= 10; j++)
    {
        for (int i = 1; i <= k; i++)
        {
            printf(" ");
        }
        k++;
        for (int i = 1; i <= l; i++)
        {
            printf("* ");
        }
        for (int i = 1; i <= l; i++)
        {
            printf("* ");
        }
        for (int i = 1; i <= l; i++)
        {
            printf("* ");
        }


        printf("\n");
    }
    return 0;
}