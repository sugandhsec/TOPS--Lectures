#include <stdio.h>

int main()
{
    int i = 1;
checkpoint:
    printf("%d ", i);
    i++;
    while (i <= 10)
    {
        goto checkpoint;
    }
    return 0;
}