#include<stdio.h>

int main()
{
    int i,j,n=5,m=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1||i==n||j==i){
                printf("%d ",m);
                m++;
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }    
    return 0;
}