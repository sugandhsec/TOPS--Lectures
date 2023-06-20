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
    struct student s[2];
    for (int i = 0; i < 2; i++)
    {
        printf("Enter Rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter Mobile: ");
        scanf("%lld", &s[i].mobile);
        printf("Enter Name: ");
        scanf(" ");
        gets(s[i].name);
    }
    // printf("Name=%s", s[1].name);
    return 0;
}