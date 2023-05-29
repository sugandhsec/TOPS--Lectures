#include <stdio.h>

int main()
{
    for (int i = 1; i < 11; i++)
    {
        printf("hello--%d\n", i);
        if (i == 6)
        {
            continue;
        }
    }
    printf("after Loop");
    return 0;
}
/*
break ---it breaks loop on certain condition
continue
goto

*/