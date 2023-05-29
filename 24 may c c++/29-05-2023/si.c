#include <stdio.h>
// #include<conio.h>
int main()
{
    int p, t;
    float r;
    float interest;
    printf("Enter Principal: ");
    scanf("%d", &p);
    printf("Enter Rate: ");
    scanf("%f", &r);
    printf("Enter Time: ");
    scanf("%d", &t);
    interest = ((float)p * r * (float)t) / 100;
    printf("Your Interest is %f", interest);
    // getch();//getcaharcter
    return 0;
}