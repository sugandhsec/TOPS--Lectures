#include <stdio.h>

int main()
{
    int n = 518434, max = 0, rem;
    while (n != 0)
    {
        rem = n % 10;   //  4 3
        if (rem > max)
        {
            max = rem;   //  4 8
        }
        n/=10;
    }
    printf("Maximum value of the digit is %d",max);
    return 0;
}