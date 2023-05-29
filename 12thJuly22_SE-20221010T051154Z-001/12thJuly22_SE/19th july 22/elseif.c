


#include <stdio.h>

int main()
{
    int per;
    printf("Enter the percentage: ");
    scanf("%d", &per);
    if (per >= 75 && per <= 100)
    {
        printf("You are pass with A grade");
    }
    else if (per >= 55 && per < 75)
    {
        printf("You are pass with B grade");
    }
    else if (per >= 35 && per < 55)
    {
        printf("You are pass with C grade");
    }
    else
    {
        printf("Sorry, you are fail");
    }

    return 0;
}