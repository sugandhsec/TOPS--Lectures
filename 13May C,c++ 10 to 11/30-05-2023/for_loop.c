#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d =%d\n", num, i, i * num);
    }

    return 0;
}
/*
for(initialization;condition;increment/decrement)
{
    body of loop
}

for(int i=20;i<30;i++)

for(int i=200;i<240;i+=2)
{
    code
}



*/