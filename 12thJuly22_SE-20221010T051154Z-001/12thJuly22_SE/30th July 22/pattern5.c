#include<stdio.h>

int main()
{
    int i,j,n;
    printf("Enter number of lines in odd value: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==(n+1)/2||i==(n+1)/2){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}