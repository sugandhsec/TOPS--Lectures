#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    char surname[50];
    char fullname[50];
    printf("Enter Your Name: ");
    scanf("%s", name);
    printf("Enter Your SurName: ");
    scanf("%s", surname);
    strcpy(fullname, name);
    strcat(fullname, surname);
    printf("Name=%s\nSurname=%s\nFullname=%s\n", name, surname, fullname);
    return 0;
}