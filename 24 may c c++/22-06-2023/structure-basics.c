#include <stdio.h>
union student
{
    char name[50];
    int age;
    unsigned long long int mobile;
};

int main()
{
    union student s1, s2;
    printf("%d", sizeof(s1));
    // printf("Enter Name: ");
    // gets(s1.name);
    // printf("Enter Age: ");
    // scanf("%d", &s1.age);
    // printf("Enter Mobile: ");
    // scanf("%llu", &s1.mobile);

    // printf("Enter Name: ");
    // scanf(" ");
    // gets(s2.name);
    // printf("Enter Age: ");
    // scanf("%d", &s2.age);
    // printf("Enter Mobile: ");
    // scanf("%llu", &s2.mobile);

    // printf("Your details Name=%s age=%d mobile=%llu\n", s1.name, s1.age, s1.mobile);
    // printf("Your details Name=%s age=%d mobile=%llu\n", s2.name, s2.age, s2.mobile);

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