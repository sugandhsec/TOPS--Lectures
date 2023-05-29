#include <stdio.h>

int main()
{
    int a = 6, b = 7, option;
    printf("Choose option 1 for Addition\n");
    printf("Choose option 2 for Subtraction\n");
    printf("Choose option 3 for Multiplication\n");
    printf("Choose option 4 for Division\n");
    printf("Please select any option: ");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Addition of %d and %d is %d", a, b, a + b);
        break;
    case 2:
        printf("Subtraction of %d and %d is %d", a, b, a - b);
        break;
    case 3:
        printf("Multiplication of %d and %d is %d", a, b, a * b);
        break;
    case 4:
        printf("Division of %d and %d is %d", a, b, a / b);
        break;

    default:
        printf("Please choose valid option..!!");
        break;
    }
    return 0;
}