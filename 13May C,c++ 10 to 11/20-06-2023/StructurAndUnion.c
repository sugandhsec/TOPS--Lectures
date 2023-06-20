#include <stdio.h>
struct student
{
    int rollno;
    char name[50];
    int age;
    long long int mobile;
};

int main()
{
    int a;
    struct student s1, s2;
    printf("Enter Rollno: ");
    scanf("%d", &s1.rollno);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    printf("Enter Mobile: ");
    scanf("%lld", &s1.mobile);
    printf("Enter Name: ");
    gets(s1.name);

    printf("Enter Rollno: ");
    scanf("%d", &s2.rollno);
    printf("Enter age: ");
    scanf("%d", &s2.age);
    printf("Enter Mobile: ");
    scanf("%lld", &s2.mobile);
    printf("Enter Name: ");
    gets(s2.name);
    return 0;
}
/*
struct structurename
{
    datatype filed1;
    datatype field 2;
    .
    .
    .
};


*/