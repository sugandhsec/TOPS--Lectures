#include <stdio.h>
int main()
{
    int age;
    printf("ENter Age: ");
    scanf("%d", &age);
    if (age < 18 && age > 0)
    {
        printf("CHild");
    }
    else if (age >= 18 && age < 40)
    {
        printf("Young");
    }
    else if (age >= 40 && age < 60)
    {
        printf("Mid-Young");
    }
    else if (age > 60 && age < 150)
    {
        printf("Senior Citizen");
    }
    else
    {
        printf("ENter Number between 1 to 150");
    }

    
    return 0;
}
/*
if(condition1)
{
    body of con=dition1
}
else if(condition2)
{
    body of condition2
}
else if(condition3)
{
    body of condition3
}
......

[else
{
    body to executed when not asingle condition is true
}]
*/