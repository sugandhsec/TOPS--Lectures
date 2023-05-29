#include <stdio.h>
int main()
{
    FILE *fp;
    char te;
    fp = fopen("demo3.txt", "r");
    do
    {
        te = getc(fp);
        printf("%c", te);
    } while (te != EOF);
    fclose(fp);
    return 0;
}