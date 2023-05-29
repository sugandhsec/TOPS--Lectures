#include<stdio.h>

int main()
{
    int i,j,temp;
    int a[7] = {34,65,124,9,455,24,90};
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d ",a[i]);
    }
    return 0;
}