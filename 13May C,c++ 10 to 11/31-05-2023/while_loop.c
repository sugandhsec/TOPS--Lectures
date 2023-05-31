#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    int i = 1;
    while (i < 10)
    {
        printf("%d x %d =%d\n", num, i, i * num);
        i++;
    }

    return 0;
}
/*
while(condition)
{
    body of whiel loop
}


*/