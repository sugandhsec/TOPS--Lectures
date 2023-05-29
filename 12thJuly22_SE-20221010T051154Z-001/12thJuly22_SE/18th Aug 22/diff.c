#include<stdio.h>

struct Emp {
    int id;
    char name[10];
   
};
union Emp1 {
    int id;
    char name[10];
   
};

int main()
{
    printf("%d \n",sizeof(struct Emp));
    printf("%d \n",sizeof(union Emp1));
    return 0;
}