#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("monday");
    }
    else if (num == 2)
    {
        printf("tuesday");
    }
    else if (num == 3)
    {
        printf("wed");
    }
    else if (num == 4)
    {
        printf("thur");
    }
    else if (num == 5)
    {
        printf("Friday");
    }
    else if (num == 6)
    {
        printf("Saturday");
    }
    else if (num == 7)
    {
        printf("Sunday");
    }

    return 0;
}