#include <stdio.h>
int main()
{
    int row1, column1, row2, column2;
    printf("Enter Row and Column for mtarix1: ");
    scanf("%d %d", &row1, &column1);
    printf("Enter Row and Column for matrix2: ");
    scanf("%d %d", &row2, &column2);
    int array1[row1][column1], array2[row2][column2], answer[row1][column2];
    printf("Enter ARRAy1\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("Enter Number: ");
            scanf("%d", &array1[i][j]);
        }
    }
    printf("Enter ARRAy2\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("Enter Number: ");
            scanf("%d", &array2[i][j]);
        }
    }
    if (column1 == row2)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                answer[i][j] = 0;
                for (int k = 0; k < column1; k++)
                {
                    answer[i][j] += array1[i][k] * array2[k][j];
                }
            }
        }
    }
    printf("print ARRAy1\n");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }
    printf("print ARRAy2\n");

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    printf("print answer\n");

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }
    return 0;
}