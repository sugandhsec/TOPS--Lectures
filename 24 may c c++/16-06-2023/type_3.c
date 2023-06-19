// function with parameter and without return value
#include <stdio.h>
void sum(int a, int b)
{
    int answer;
    answer = a + b;
    printf("Answer =%d", answer);
}
int main()
{
    sum(58, 65);
    sum(15, 56);
    return 0;
}