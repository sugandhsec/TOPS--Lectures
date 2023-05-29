#include<stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;
    int ***r = &q;

    printf("The value of a is %d\n",a);
    printf("The value of a is %d\n",*p);
    printf("The value of a is %d\n",**q);
    printf("The value of a is %d\n",***r);
    printf("The Address of a is %d\n",p);
    printf("The Address of a is %u\n",p);
    printf("The Address of a is %x\n",p);
    printf("The Address of a is %p\n",p);
    return 0;
}