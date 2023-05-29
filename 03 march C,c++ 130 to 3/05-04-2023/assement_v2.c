#include <stdio.h>
int main()
{
    int ch, qty, amount = 0, total_amount = 0;
    char rep;
start:
    printf("1.Pizza\t\tprice=180rs/pcs\n");
    printf("2.Burger\tprice=100rs/pcs\n");
    printf("3.Dosa\t\tprice=120rs/pcs\n");
    printf("4.Idli\t\tprice=50rs/pcs\n");
    printf("Enter your Choice: ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("You have Selected Pizza");
        printf("\nENter Quantity: ");
        scanf("%d", &qty);
        amount = 180 * qty;
        total_amount = total_amount + amount;
        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
    }
    else if (ch == 2)
    {
        printf("You have Selected Burger");
        printf("\nENter Quantity: ");
        scanf("%d", &qty);
        amount = 180 * qty;
        total_amount = total_amount + amount;
        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
    }
    else if (ch == 3)
    {
        printf("You have Selected Dosa");
        printf("\nENter Quantity: ");
        scanf("%d", &qty);
        amount = 180 * qty;
        total_amount = total_amount + amount;
        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
    }
    else if (ch == 4)
    {
        printf("You have Selected Idli");
        printf("\nENter Quantity: ");
        scanf("%d", &qty);
        amount = 180 * qty;
        total_amount = total_amount + amount;
        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
    }
    printf("Do You Want To Place More Orders: ? y & n : ");
    scanf(" ");
    scanf("%c", &rep);
    if (rep == 'y' || rep == 'Y')
    {
        goto start;
    }
    else
    {
        printf("************Thanks FOR SHOPPING*****************\n");
        printf("Your Final Bill is %d", total_amount);
    }
    return 0;
}