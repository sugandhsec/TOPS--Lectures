#include <stdio.h>
int main()
{
    int a = 85, b = 38;
    FILE *fp;
    fp = fopen("demo.txt", "w");
    fprintf(fp,"this is very new contnet for append");
    fclose(fp);

    return 0;
}