#include <stdio.h>
int main()
{
    int num;
    printf("ENter Number: ");
    scanf("%d", &num);
    if ((num % 2) == 0) // condition final output
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
/*
simple if

if(condition)
{
    body
}
if...else
if(condition)
{
    this block execute when condition is true
}
else
{
    this block execute when condition is false
}

if...else if...else if....else (ladder if else)
nested if else
*/