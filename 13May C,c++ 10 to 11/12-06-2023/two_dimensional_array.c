#include <stdio.h>
int main()
{
    int a[5][3] = {{45, 68, 95},
                   {45, 78, 14},
                   {102, 36, 54},
                   {71, 28, 96},
                   {14, 52, 31}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
one dimensional array
datatype arrayname[maxsize];
int a[10];
{14,54,89,65,87,45,89,645,96,457}

two dimensional array
datatype arrayname[rowsize][columnsize]
int a[10][5]
{{45,65},{12,32},{47,89},{45,12}}





*/