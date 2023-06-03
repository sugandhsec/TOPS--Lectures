#include <stdio.h>
int main()
{
    int day;
    printf("Enter Number: ");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("Monday");
    }
    else if (day == 2)
    {
        printf("tuesday");
    }
    else if (day == 3)
    {
        printf("Wednesday");
    }
    else if (day == 4)
    {
        printf("thursday");
    }
    else if (day == 5)
    {
        printf("Friday");
    }
    else if (day == 6)
    {
        printf("Saturday");
    }
    else if (day == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Enter Between 1 to 7 ");
    }

    return 0;
}