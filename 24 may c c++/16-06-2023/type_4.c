// function without paremeter and without return value
#include <stdio.h>
#include<string.h>
void sum()
{
    int a, b, answer;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    answer = a + b;
    printf("Addition= %d", answer);
}
int main()
{
    sum();
    sum();
    int len;
    char name[50] = "WOW Thsi is something";
    len = strlen(name);
    return 0;
}