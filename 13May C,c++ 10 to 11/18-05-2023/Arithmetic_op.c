#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &a, &b);
    printf("value of a is %d and value of b is %d", a, b);
    float c = (float)a / (float)b;
    printf("Addition = %f", c);
    return 0;
}
// + - * / %
// typecasting
// converting one datatype into another