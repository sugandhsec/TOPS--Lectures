#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("Enter Number: ");
        scanf("%d", &num);
    } while (num != 101);
    return 0;
}
/*
do
{
    body of loop
}while(condition);
*/