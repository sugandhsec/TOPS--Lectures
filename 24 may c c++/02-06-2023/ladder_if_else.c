#include <stdio.h>
int main()
{
    int a, b, c, d, e, total;
    float percent;
    printf("Enter 5 subject Marks ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    // total = a + b + c + d + e;
    // printf("total is %d\n", total);
    percent = ((float)(a+b+c+d+e)/500)*100;
    printf("percentage is %f\n", percent);

    // printf("Enter your percentage: ");
    // scanf("%f", &percent);
    if (percent >= 90 && percent < 100)
    {
        printf("grade A");
    }
    else if (percent >= 80 && percent < 90)
    {
        printf("Grade B");
    }
    else if (percent >= 70 && percent < 80)
    {
        printf("Grade C");
    }
    else if (percent >= 60 && percent < 70)
    {
        printf("Grade D");
    }
    else if (percent >= 50 && percent < 60)
    {
        printf("Grade E");
    }
    else if (percent >= 33 && percent < 50)
    {
        printf("Grade F");
    }
    else if (percent < 33 && percent > 0)
    {
        printf("Fail");
    }
    else
    {
        printf("Enter Percentage Between 1 to 100 ");
    }
    
    return 0;
}