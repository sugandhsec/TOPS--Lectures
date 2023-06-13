#include <stdio.h>
int main()
{
    // int a[10] = {45, 65, 32, 65, 12};
    int a[10];
    // arrayname[indenumber];
    // printf("%d ",a[0]);
    // printf("%d ",a[1]);
    // printf("%d ",a[2]);
    // printf("%d ",a[3]);
    // printf("%d ",a[4]);
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &a[i]);
    }


    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}