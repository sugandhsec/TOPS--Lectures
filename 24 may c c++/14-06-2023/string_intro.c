#include <stdio.h>
int main()
{
    // int a = 50;
    // int b = a;
    // printf("%d %d", a, b);
    char name[50] = "rahul";
    char copy_name[50] = name;
    // printf("Enter Name: ");
    // // scanf("%s", name);
    // gets(name); // getstring

    printf("%s %s", name, copy_name);

    return 0;
}
/*
string is nothing but just an character array
char name[50]; --string
char a[5]={'l',"p","t","r","r"};
char a[5]="lptrr"; ----string value assign
for(int i=0;i<5;i++)
{
    printf("%c",a[i]);
}

printf("%s",a); ---string print
scanf("%s",a); ----string input

// string methods
strlen() --string length
strcpy() ---string copy
strcmp() ---string comparsion
strcat() ---string concatenation
strlwr()  --- string lowercase
strupr() ----string uppercase
strrev() ----string reverse

*/