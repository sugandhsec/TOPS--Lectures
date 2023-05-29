#include<stdio.h>

int main()
{
    int i,j,a[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the value for a[%d][%d] index position: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n---------------------------------\n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}