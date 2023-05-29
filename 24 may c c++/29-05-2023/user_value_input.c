#include <stdio.h>
int main()
{
    int age;
    float weight;
    printf("Enter Your Age:  ");
    scanf("%d", &age);
    printf("Enter Weight: ");
    scanf("%f", &weight);
    printf("Your age is %d \n your weight is %.2f", age, weight);
    return 0;
}
/*
scanf("format specifier",&variable_name)

&--address operator
*/