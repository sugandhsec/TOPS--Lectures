// Function with Paramter and with return value
#include <stdio.h>
int sum(int a, int b)
{
    int answer;
    answer = a + b;
    return answer;
}

int main()
{
    int add;
    add = sum(58, 32);
    printf("Addition =%d", add);
    add = sum(45, 32);
    printf("Addition =%d", add);
    return 0;
}