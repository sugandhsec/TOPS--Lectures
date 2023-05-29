#include <stdio.h>

int main()
{
    int a = 10, b = 20, c;
    printf("The value of a before swap is %d\n", a);
    printf("The value of b before swap is %d\n", b);
    // c = a;   //  10
    // a = b;   //  20
    // b = c;   //  10

    a = a * b; //  200
    b = a / b; //  10
    a = a / b; //  20
    printf("The value of a after swap is %d\n", a);
    printf("The value of b after swap is %d\n", b);
    return 0;
}

// XOR bitwise operator