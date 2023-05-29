#include <stdio.h>
int main()
{

    int array[3][4] ;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter Value: %d %d : ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}