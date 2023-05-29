#include<stdio.h>

int main()
{
    int i,j,n=7;
    char a = 'A';
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}