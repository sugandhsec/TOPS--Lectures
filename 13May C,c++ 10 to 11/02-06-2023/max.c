#include <stdio.h>
int main()
{
    int num = 98457, rem;
    int max = num % 10;
    while (num != 0)
    {
        rem = num % 10;

        if (rem > max)
        {
            max = rem;
        }

        num = num / 10;
    }
    printf("%d", max);

    return 0;
}