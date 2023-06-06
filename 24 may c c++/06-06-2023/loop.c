#include <stdio.h>
int main()
{
    int num,i;
    printf("Enter Number: ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        // printf("hello Wolrd\n");
        printf("%d X %d = %d\n", num,  i, num * i);
    }

    return 0;
}
/*
take 10 numbers and give which is odd or which one is even
45-67  odd even 

loop
3 types of loop
1--for loop --- number of times we know
2--while loop --- condition is known but iteration is not
3---do while loop ---condition is known but iteration is not

for(initialization;condition;increment/decrement)
{
    code which you want to repaeat
}

iteration---looping of statement
iterating variable


*/