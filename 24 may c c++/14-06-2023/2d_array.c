#include <stdio.h>
int main()
{
    // int array[4][3] = {{45, 65, 32}, {48, 75, 95}, {12, 36, 54}, {41, 52, 63}};
    int array[4][3];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter number: ");
            scanf("%d ", &array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
{45,23,65,87,89}
{{45,65,89},{1,2,3},{4,5,6},{7,8,5}}
datatype arrayname[maxsize][insidearraymaxsize];
int a[4][3]

*/