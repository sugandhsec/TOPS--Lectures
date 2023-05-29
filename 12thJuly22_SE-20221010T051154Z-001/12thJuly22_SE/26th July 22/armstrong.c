#include <stdio.h>

int main()
{
    int rem, n = 153, temp = n, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n /= 10;
    }

    if (sum == temp)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is non-Armstong");
    }
    return 0;
}