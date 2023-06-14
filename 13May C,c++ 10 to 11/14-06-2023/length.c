#include <stdio.h>
int main()
{
    // char name[500] = "fjhfwfk iugbfkj fhiebgrk hrvbjrkbr hgb ";
    char name[500];
    printf("Enter Name: ");
    gets(name);
    int a;
    a = strlen(name);
    printf("your name lenght is %d", a);
    return 0;
}