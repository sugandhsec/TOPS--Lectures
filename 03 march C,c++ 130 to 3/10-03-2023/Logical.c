#include <stdio.h>
int main()
{
    // printf("%d", 85 > 48 && 26 < 45 && 21 < 96);
    // printf("%d", 85 & 112);
    printf("%d", 48>>4); 
    return 0;
}
/*
logical operators
AND -- && ---all condition will be true T
if at least one condition is false final answer is false
OR -- ||----if any one condition is true final output is true if all condition is false then fianl output is false
NOT -- ! ----it will reverse your answer
!(85>9 || 62<12) ---0
85>9   --1
62<12  --0
*/