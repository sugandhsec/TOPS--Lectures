#include<stdio.h>

int main()
{
    // int arr[5] = {45,67,78,89,93};
    // //            0   1  2  3  4
    // printf("%d",arr[2]);

    int a[5];
    for(int i = 0;i<5;i++){
        printf("Enter the value of %d index position: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n\n-----------------------------------\n");
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}