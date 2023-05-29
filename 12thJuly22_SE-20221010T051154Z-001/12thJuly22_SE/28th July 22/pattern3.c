#include<stdio.h>

/*

      *
     * *
    * * *
   * * * *
  * * * * *

*/

int main()
{
    int i,j,k,n=5;
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf(" \n");
    }
    for(i=1;i<=n;i++){
        for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=1;j<=n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}