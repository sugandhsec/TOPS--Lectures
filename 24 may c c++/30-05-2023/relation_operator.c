#include <stdio.h>
int main()
{
    // int a;
    // a = 65 != 3;
    // printf("%d", a);
    // printf("%d", 89 > 55 && 32 < 11 && 48 == 48 && 45 >= 23);
    // printf("%d", 89 < 55 || 32 < 11 || 48 == 21 || 45 <= 23);
    printf("%d", !(56 > 89));
    return 0;
}
/*
Conditions
89>55 1
32>11 0
48==48 0
45>=23 1


logical and(&&)---if all the condition is true then final answer is true ,if any one condition or more than that is false the fianl is false

logical or(||)--if anyone condition or more than one is true then final answer is true , if all condition is false then final answer is false

logical(!)---it will reverse your answer true becomes flase and vice versa
*/
