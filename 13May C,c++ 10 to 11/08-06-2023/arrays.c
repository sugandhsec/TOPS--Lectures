#include <stdio.h>
int main()
{
    int a[20];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number: ");
        
        scanf("%d\n", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    // printf("%d\n", a[0]);
    // printf("%d\n", a[1]);
    // printf("%d\n", a[2]);
    // printf("%d\n", a[3]);
    // printf("%d\n", a[4]);
    // printf("%d\n", a[5]);
    // printf("%d\n", a[6]);
    // printf("%d\n", a[7]);

    return 0;
}
/*
array is a collection of elemenst of similar datatype

datatype arrayname[max_size]=array elements

index number --starts 0

*/