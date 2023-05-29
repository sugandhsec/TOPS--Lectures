#include<stdio.h>

int main()
{
    int y = 1600;
    if((y % 4 == 0 || y % 400 ==0) && (y % 100 !=0)){
        printf("Year is leap year");
    }
    else{
        printf("Not leap year");
    }
    return 0;
}