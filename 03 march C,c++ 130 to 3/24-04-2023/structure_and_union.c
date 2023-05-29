/*
outside of main()
struct structurename
{
   dattyep1 variablenamel

}

struct structurename variablename
*/
#include <stdio.h>
union student
{
    char name[25];
    int age;
    
    int rollno;
    char email[20];
};

int main()
{
    int k = 20;
        // int a[10];
        union student s1, s2, s3, s4;
    printf("%d", sizeof(s1));
        // printf("Enter NAme: ");
        // gets(s1.name);
        // printf("Enter age: ");
        // scanf("%d", &s1.age);
        // printf("Enter rollno: ");
        // scanf("%d", &s1.rollno);
        // printf("Enter email: ");
        // scanf("%s", &s1.email);
        // printf("Name=%s\nage=%d\nrollno=%d\nemial=%s\n", s1.name, s1.age, s1.rollno, s1.email);
        return 0;
}