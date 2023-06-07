#include <stdio.h>
int main()
{
    int num, max, last, new = 0;
    printf("Enter Number: ");
    scanf("%d", &num);
    max = num % 10;
    while (num != 0)
    {
        last = num % 10;
        // if (last > max)
        // {
        //     max = last;
        // }
        new = new * 10 + last;
        num = num / 10;
    }
    printf("your Maximum No is %d", new);
    return 0;
}