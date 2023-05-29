#include <stdio.h>
int main()
{

    // printf("%d", 44 < 31 && 87 < 21 && 101 < 23 && 54 <= 54);
    // printf("%d", 44 < 31 || 87 < 21 || 101 < 23 || 54 <= 54);
    // printf("%d", 44 < 31 && 87 < 21 || 101 < 23 && 54 <= 54 || 78 < 25 && 58 >= 12 || 89 <= 89 && 24 || 54);
    printf("%d", !(54 < 102));
    // printf("%d", 56 * 89 & 25 % 2 / 4);
    return 0;
}
/*
44>31 1
87<21 0
101>231 0
54<=54 1


Logical Operator


logical ANd(&&) -- If all Condition is true then True if atleast one is false then final result is false

 1 11111111111111111011111111

 Logical Or(||)---if all condition is false then false if atleats one true thne final result will be true

Associativity of operators
printf("%d",)

Logicsal Notcondition(!)

*/