#include <stdio.h>
int main()
{
    int n = 55;
    n = 85;
    int a[15] = {10, 20, 30, 40, 50, 65};
    int b[5];
    int c[5][10] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("%d", sizeof(c));
    // printf("%d",a[0]);
    // printf("%d",a[1]);
    // printf("%d",a[2]);
    // printf("%d",a[3]);
    // printf("%d",a[4]);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", a[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter value: ");
    //     scanf("%d", &a[i]);
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d ", c[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}
/*
datatype arrayname[]={value1,value2,value3......}
datatype arrayname[max_length];//declare
index position 0
*/