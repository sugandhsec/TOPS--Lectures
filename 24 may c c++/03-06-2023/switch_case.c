#include <stdio.h>
int main()
{
    int day;
    printf("Enter Number: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("tueday");
        break;
    }
    case 3:
    {
        printf("Wednesday");
        break;
    }
    case 4:
    {
        printf("thursday");
        break;
    }
    case 5:
    {
        printf("friday");
        break;
    }
    case 6:
    {
        printf("Saturday");
        break;
    }
    case 7:
    {
        printf("Sunday");
        break;
    }
    default:
    {
        printf("Enter Number Between 1 to 7");
        break;
    }
    }

    return 0;
}
/*
switch(variable)
{
    case value1:
    {
        body
    }
    case value2:
    {
        body
    }
    .
    .
    .
    .
    default:
    {

    }
}


*/