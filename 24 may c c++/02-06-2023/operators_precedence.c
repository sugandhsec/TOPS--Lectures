#include <stdio.h>
int main()
{
    int a;
    a = (65 > 42) && (89 < 21) || (45 < 27) && (23 > 9);

    printf("%d", a);
    return 0;
}