#include <stdio.h>
int main()
{
    int age;
    printf("ENter Number: ");
    scanf("%d", &age);
    if (age > 18) // condition final output
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("Not eligible for voting");
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