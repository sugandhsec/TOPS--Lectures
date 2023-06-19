#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Demo.txt", "a");
    fprintf(fp, "this is our new content");

    fclose(fp);
    return 0;
}