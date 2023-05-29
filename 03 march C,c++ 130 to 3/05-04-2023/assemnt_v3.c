#include <stdio.h>
int main()
{
    int ch, qty, amount = 0, total_amount = 0;
    char rep;
    do
    {
        printf("1.Pizza\t\tprice=180rs/pcs\n");
        printf("2.Burger\tprice=100rs/pcs\n");
        printf("3.Dosa\t\tprice=120rs/pcs\n");
        printf("4.Idli\t\tprice=50rs/pcs\n");
        printf("Enter your Choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            printf("You have Selected Pizza");
            printf("\nENter Quantity: ");
            scanf("%d", &qty);
            amount = 180 * qty;
            total_amount = total_amount + amount;
            printf("Amount: %d \n", amount);
            printf("Total Amount: %d \n", total_amount);
            break;
        }
        case 2:
        {
            printf("You have Selected Burger");
            printf("\nENter Quantity: ");
            scanf("%d", &qty);
            amount = 180 * qty;
            total_amount = total_amount + amount;
            printf("Amount: %d \n", amount);
            printf("Total Amount: %d \n", total_amount);
            break;
        }
        case 3:
        {
            printf("You have Selected Dosa");
            printf("\nENter Quantity: ");
            scanf("%d", &qty);
            amount = 180 * qty;
            total_amount = total_amount + amount;
            printf("Amount: %d \n", amount);
            printf("Total Amount: %d \n", total_amount);
            break;
        }
        case 4:
        {
            printf("You have Selected Idli");
            printf("\nENter Quantity: ");
            scanf("%d", &qty);
            amount = 180 * qty;
            total_amount = total_amount + amount;
            printf("Amount: %d \n", amount);
            printf("Total Amount: %d \n", total_amount);
            break;
        }
        }
        printf("Do You Want To Place More Orders: ? y & n : ");
        scanf(" ");
        scanf("%c", &rep);
    } while (rep != 'n');
    printf("************Thanks FOR SHOPPING*****************\n");
    printf("Your Final Bill is %d", total_amount);

    return 0;
}