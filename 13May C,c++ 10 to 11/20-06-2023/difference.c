#include <stdio.h>
union student
{
    int rollno;
    char name[50];
    int age;
    long long int mobile;
};

int main()
{
    union student s1;
    printf("%d", sizeof(s1));
    return 0;
}