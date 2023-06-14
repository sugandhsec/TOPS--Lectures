#include <stdio.h>
int main()
{
    char name[50]="grgrhgr";
    int age, mobile;
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("Enter Your NAme: ");
    // scanf("%s", name);
    gets(name); //getstring()
    printf("Apka Subh Nam hai %s", name);

    return 0;
}
/*
// string
char a[20]={'a','p',"t","m"};
int b[10]=
char a[20]="gfertgrgr rtgrgr";
\0--null character or terminating character
scanf("%s",a);
printf("%s",a)



*/