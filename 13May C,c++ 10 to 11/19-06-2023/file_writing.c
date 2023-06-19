#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("Demo.txt", "w");
    fprintf(fp, "Good Morning");

    fclose(fp);
    return 0;
}