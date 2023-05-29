#include<stdio.h>
#include<string.h>

struct Emp{
    int id;
    char name[20];
    float sal;
};

int main()
{
    // struct Emp e1 = {101,"Paresh",1234.5};
    // struct Emp e2 = {102,"Ashok",12346.5};
    // printf("%d %s %.2f\n",e1.id,e1.name,e1.sal);
    // printf("%d %s %.2f\n",e2.id,e2.name,e2.sal);
    struct Emp e3;
    strcpy(e3.name,"Raj");
    e3.sal = 123465.6;
    e3.id = 103;
    printf("%d %s %.2f\n",e3.id,e3.name,e3.sal);


    return 0;
}