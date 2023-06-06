#include <stdio.h>
int main()
{
    int num = 98457, rem, new_num=0;
    while (num != 0)
    {
        rem = num % 10;

        new_num = new_num * 10 + rem;

        num = num / 10;
    }
    printf("%d", new_num);

    return 0;
}