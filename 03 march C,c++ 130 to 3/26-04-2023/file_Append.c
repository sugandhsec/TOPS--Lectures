#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter NAme: ");
    gets(name);
    FILE *fp;
    fp = fopen("demo1.txt", "a");
    fprintf(fp, "\nYour name is %s", name);
    printf("\nYour name is %s", name);
    fclose(fp);

    return 0;
}
/*
FILE *pointername;
FILE *fp;
file open
filepointer_name=fopen("filename","mode")
fp=fopen("Demo.txt","w")
// modes of files
read---r---This will open file for reading purpose but if file is not present then it gives error.

write---w---This will open file for reading purpose and all old content will be deleted and if file is not present then it create a new empty file.

append---a----This will open file for append purpose and all old content will not be deleted and if file is not present then it create a new empty file.


file task R W A
write

fprintf(filepointername,"message $5D %sd",a,b)



file close
fclose(filepointername);

fclose(fp);

*/