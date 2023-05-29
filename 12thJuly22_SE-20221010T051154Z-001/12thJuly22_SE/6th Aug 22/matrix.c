#include <stdio.h>

int main()
{
    int i, j, a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},b[3][3]={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},c[3][3];
    printf("\nMartix number 1 is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMartix number 2 is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n\nAddition of both matrices is\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j]*b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    // int sum = 0;

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         if(i==j){
    //             sum = sum + a[i][j];
    //         }
    //     }
    // }
    // printf("Addition of the diagonal of matrix is %d", sum);
    return 0;
}