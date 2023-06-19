#include <stdio.h>
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("demo.txt", "r");
    while (ch != EOF)
    {
        ch = getc(fp);
        printf("%c", ch);
    }
    // EOF END OF FILE
    fclose(fp);
    return 0;
}