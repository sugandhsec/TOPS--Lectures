#include <stdio.h>

int main()
{
    int a = 112, b = 260;
    while (a != b)
    {
        if (a > b)
        {
            a -= b; //  112-36  == 76-36  == 40 - 36 == 4
        }
        else
        {
            b -= a; //  260-112  ==  36
        }
    }
    printf("%d", a);
    return 0;
}