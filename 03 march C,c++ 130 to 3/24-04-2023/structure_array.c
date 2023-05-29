/*
outside of main()
struct structurename
{
   dattyep1 variablenamel

}

struct structurename variablename
*/
#include <stdio.h>
struct student
{
    char name[50];
    int age;
    int rollno;
    char email[50];
};

int main()
{
    int n;
    printf("Enter Number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter NAme: ");
        scanf(" ");
        gets(s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter rollno: ");
        scanf("%d", &s[i].rollno);
        printf("Enter email: ");
        scanf("%s", &s[i].email);
        printf("Name=%s\nage=%d\nrollno=%d\nemial=%s\n", s[i].name, s[i].age, s[i].rollno, s[i].email);
    }

    return 0;
}