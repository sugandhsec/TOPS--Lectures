#include <stdio.h>

int main()
{
    int rem, n = 1331, temp = n, sum = 0;
    while (n != 0)
    {
        rem = n % 10;   //   1  3  3  1
        sum = sum*10+rem;  //  1331
        n /= 10;    //  
    }

    if (sum == temp)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number is non-Palindrome");
    }
    return 0;
}