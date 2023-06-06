#include <stdio.h>
int main()
{
    int num1, num2;
    char sy;
    scanf("%d", &num1);
    scanf(" ");
    scanf("%c", &sy);
    scanf("%d", &num2);
    switch (sy)
    {
    case '+':
    {
        printf("Addition=%d", num1 + num2);
        break;
    }
    case '-':
    {
        printf("Addition=%d", num1 - num2);
        break;
    }
    case '*':
    {
        printf("Addition=%d", num1 * num2);
        break;
    }
    case '/':
    {
        printf("Addition=%d", num1 / num2);
        break;
    }
    }

    return 0;
}