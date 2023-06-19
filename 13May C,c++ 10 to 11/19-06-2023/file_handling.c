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
/*
file open

FILE *filepointername
FILE *fp;
fp=fopen("filename","mode")
fp=fopen("demo.txt","r")
mode
read---r----if file is open in read mode
the file must be exist in your system then it open for reading purpose and if file not exist then it gives error
write---w---if file exist then it open for writing purpose and all old content is deleted and if file not exist it will create a new file but not give error
append----a---if file exist then it open for append purpose and all old content is not deleted and if file not exist it will create a new file but not give error


fp=open("demo.txt","r")

file Read,Write,Append

Write
fprintf(filepointername,"data",variables);

file close
fclose(filepointernname)
fclose(fp)

*/