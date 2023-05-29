#include <stdio.h>
int main()
{
    int ch, qty, amount = 0, total_amount = 0;
    char rep;
    FILE *fp;
    fp = fopen("receipt.txt", "w");
    fprintf(fp, "********************************************\n");
    fprintf(fp, "\t\t\tRECEIPT\t\t\n");
    fprintf(fp, "********************************************\n");
    fprintf(fp, "\tTerminal\t\t24-04-2023  03:20\n");
    fprintf(fp, "--------------------------------------------\n");

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
    }
    else if (ch == 2)
    {
        printf("You have Selected Burger");
    }
    else if (ch == 3)
    {
        printf("You have Selected Dosa");
    }
    else if (ch == 4)
    {
        printf("You have Selected Idli");
    }
    printf("\nENter Quantity: ");
    scanf("%d", &qty);
    if (ch == 1)
    {
        amount = 180 * qty;
        total_amount = total_amount + amount;
        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
        fprintf(fp, "%d x Pizza\t\t\t%d\n", qty, amount);
    }
    else if (ch == 2)
    {
        amount = 100 * qty;
        total_amount = total_amount + amount;
        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
        fprintf(fp, "%d x Burger\t\t\t%d\n", qty, amount);
    }
    else if (ch == 3)
    {
        amount = 120 * qty;
        total_amount = total_amount + amount;

        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
        fprintf(fp, "%d x Dosa\t\t\t%d\n", qty, amount);
    }
    else if (ch == 4)
    {
        amount = 50 * qty;
        total_amount = total_amount + amount;
        printf("Amount: %d \n", amount);
        printf("Total Amount: %d \n", total_amount);
        fprintf(fp, "%d x Idli\t\t\t%d\n", qty, amount);
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
        fprintf(fp, "----------------------------------------------\n");
        fprintf(fp, "----------------------------------------------\n");
        fprintf(fp, "TOTAL AMOUNT\t\t\t%d\n", total_amount);
        fprintf(fp, "----------------------------------------------\n");
        fprintf(fp, "****************THANK YOU*********************\n");
        fprintf(fp, "**********************************************\n");
    }
    fclose(fp);
    return 0;
}