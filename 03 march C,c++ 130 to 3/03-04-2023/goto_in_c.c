#include <stdio.h>
int main()
{
    printf("1\n");
    printf("2\n");
    l2:
    printf("3\n");
    printf("4\n");
    printf("5\n");
    goto l2;   
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    return 0;
}
/*
labelname:

goto labelname;

*/