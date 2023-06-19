// function without parameter and with return value
#include <stdio.h>

int sum()
{
    int a, b, add;
    printf("ENter Value of a and b");
    scanf("%d %d", &a, &b);
    add = a + b;
    return add;
}
int main()
{
    int answer;
    answer = sum();
    printf("%d", answer);
    return 0;
}