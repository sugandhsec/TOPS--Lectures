#include <stdio.h>
int main()
{
    // EOF --End Of File
    FILE *fp;
    char ch;
    fp = fopen("demo2.xls", "r");
    while (ch != EOF)
    {
        ch = getc(fp);
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}