#include<stdio.h>

int main()
{
    int max,i;
    int a[7] = {34,65,124,9,455,24,90};
    max = a[0];  // 34
    for(i=0;i<7;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("Maximum value of the array is %d",max);
    return 0;
}