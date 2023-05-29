#include <stdio.h>
#include <string.h>
int main()
{
    char name[50] = "Sugandh";
    char surname[50] = "Gupta";
    // strcat(name, surname);
    strcat(surname, name);
    printf("name=%s\nsurname=%s", name, surname);

    return 0;
}
/*
strcat(source,destination)

where source becomes source+destination
but destination remain unchanged
*/