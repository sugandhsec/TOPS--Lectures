#include<stdio.h>

/*
    * * * * *
      * * * *
        * * *
          * *
            *
*/


int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        for(k=1;k<=i-1;k++){
            printf("  ");
        }
        for(j=n;j>=i;j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}