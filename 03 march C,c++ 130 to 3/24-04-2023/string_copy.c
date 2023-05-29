#include<stdio.h>
#include<string.h>
int main()
{
int a=85;
int b=a;
// printf("%d %d",a,b);
char name[20]="hello";
char cname[20];
// char cname[20]=name;
strcpy(cname,name);
printf("%s %s",name,cname);

    return 0;
}
/*
strcpy(source,destination)

*/