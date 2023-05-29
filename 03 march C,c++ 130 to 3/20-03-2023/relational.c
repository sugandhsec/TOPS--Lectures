#include <stdio.h>
int main()
{
    int c = 14;
    int d = 58;
    int a = 89 > 36 && 45 < 22 || 15 > 12;
    printf("%d", a);
    return 0;
    // > < >= <= == !=

    // 85>36
    // 29<12
    // AND(&&) OR(||) NOT(!)
    // 89>36 && 45<12 && 102>85  --0
    // 89<36 || 45<12 || 102<85  --0
// !(89<25)
    // AND-- all condition true then answer will be true otherwise false

    // OR --atleast one condition is true then true ,,if all false then false

    // 89>36 && 45<22 || 15>12




}