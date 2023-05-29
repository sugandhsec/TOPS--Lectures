/*
limitaion 1:
in switch case you cannot give condition

on basis of user value

switch(variable)
{
    case 'l':
    {

    }
    case 'm':
    {

    }
}

*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    {
        printf("Monday");
        break;
    }
    case 2:
    {
        printf("tue");
        break;
    }
    case 3:
    {
        printf("wed");
        break;
    }
    case 4:
    {
        printf("thu");
        break;
    }
    case 5:
    {
        printf("fri");
        break;
    }
    case 6:
    {
        printf("sat");
        break;
    }
    case 7:
    {
        printf("sun");
        break;
    }
    default:
    {
        printf("Invalid number");
        break;
    }
    }

    return 0;
}