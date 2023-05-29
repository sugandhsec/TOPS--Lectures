#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("main.txt", "a");
    char s[20] = "\nGood Morning..!!";
    fprintf(ptr, "%s", s);
    printf("Data inserted successfully..!!");
    fclose(ptr);
    return 0;
}