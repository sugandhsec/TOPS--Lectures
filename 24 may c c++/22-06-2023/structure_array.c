#include <stdio.h>
struct student
{
    char name[10];
    int age;
    unsigned long long int mobile;
};

int main()
{
    int num;
    printf("Enter Number oDs Styudents: ");
    scanf("%d", &num);
    struct student s[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter Name: ");
        scanf(" ");
        gets(s[i].name);
        printf("Enter Age: ");
        scanf("%d", &s[i].age);
        printf("Enter Mobile: ");
        scanf("%llu", &s[i].mobile);

        printf("Your details Name=%s age=%d mobile=%llu\n", s[i].name, s[i].age, s[i].mobile);
    }

    return 0;
}
/*
outside of main()
struct student
{
   char name[50];
   int age;
   int mobile;
};

struct student s1,s2;
struct student s[5];


*/