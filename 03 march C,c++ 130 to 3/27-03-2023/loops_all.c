#include <stdio.h>
int main()
{
    int k;
    printf("Enter A number: ");
    scanf("%d", &k);
    int i;
    for (i = 1; i < 10; i++)
    {
        printf("%d * %d = %d\n", k, i, k * i);
    }
    return 0;
}
/*
Loops is a block of code which repeats anything inside that

types of loops
1)For loop ---
2)while loop
3)Do while loop

iteration--means running same process multiple times
itearting variable ---- i

for loop

for(initialization;condition;increment/decrement)
{
    body of the loop
}
*/