#include <stdio.h>
int main()
{
    int a ;
    a=50;
    int b = a;
    char name[200] = "hello world";
    char copyname[200];
    strcpy(copyname, "vfhkrjgfhjkr");
    strcpy(copyname, name);
    printf("%s", copyname);
    return 0;
}