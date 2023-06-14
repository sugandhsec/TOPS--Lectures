#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char one[50] = "hello";
    char two[50] = "hell";
    // a = strcmp(one, two);
    // a = strcmp(two, one);
    a = strcmp(two, one);
    printf("%d", a);
    return 0;
}
/*
string comparsion gives three answer

1---if first is greater than second then answer i s +1
2--- if first is smaller then second the answer is -1
3--if both is same the answer is 0

*/