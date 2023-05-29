#include <stdio.h>
int main()
{
    int age;
    printf("Enter Age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("Eliegible for voting");
    }
    else
    {
        printf("Not Eliegible for voting");
    }

    return 0;
}
/*
if(condition)
{
    body of if
}
else
{
    body of else
}

*/