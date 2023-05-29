#include <stdio.h>
int main()
{
    float percent;
    printf("Enter Percentage: ");
    scanf("%f", &percent);
    if (percent > 90 && percent <= 100)
    {
        printf("Grade A1");
    }
    else if (percent > 80 && percent <= 90)
    {
        printf("Grade B1");
    }
    else if (percent > 70 && percent <= 80)
    {
        printf("Grade B2");
    }
    else if (percent > 60 && percent <= 70)
    {
        printf("Grade C1");
    }
    else if (percent > 50 && percent <= 60)
    {
        printf("Grade C2");
    }
    else if (percent > 33 && percent <= 40)
    {
        printf("Grade D");
    }
    else if (percent > 0 && percent <= 33)
    {
        printf("FAIL");
    }
    else
    {
        printf("Enter Percentage Between 1 To 100");
    }

    
    return 0;
}
/*
if(condition1)
{
    part of condition1
}
else if(condition2)
{
    part of condition2
}
else if(condition3)
{
    part of condition3
}
.
.
.
.
[else
{
    this block will execute when not a single condition is True
}]


*/