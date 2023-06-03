#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age > 60)
    {
        printf("you are senior citizen");
    }
    else
    {
        printf("you are Young");
    }
    // gtgge

    return 0;
}
/*
// Conditional Statements
1--- simple if
2---if....else
3----if....else if...else if.............else(ladder if else)
4--nested if else

// simple if syntax:
if(condition)
{
    body of if
}

// if...else syntax:

if(condition)
{
    what to do when condition is true means 1
}
else
{
    what do do when condition is flase
}

//ladder if else

if(condition1)
{
    body of if
}
else if(condition2)
{
    body of condition 2
}
else if(condition3)
{
    body of condition3
}
.
.
.
.
.
.
else
{
    what to do  when not a single condition is true
}

*/