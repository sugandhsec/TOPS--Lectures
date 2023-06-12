#include <stdio.h>
int main()
{
    char a = 'p';
    // sizeof() ---size in bytes 1024 bytes--1 kb --1024 kb ---1 mb
    int b = sizeof(a);
    printf("%d", b);
    return 0;
}
/*

variales have storage in bytes

int --- 4  ---
Array ----
Array is a collection of elements of similar datatype

 int a=10;
 int b=20;
 int c=78;
 int d=48;

 int a[9]=
 index number

 variable  declaration --- datatype variablename ---- int a;
 variable initilalization ----- variablename = value -----a=58;
 variable using ---- name of the variable--- printf("%d",a);

 Array declaration

 datatype variablename[maxsize]
 int a[20];

 array Initialization ---Giving values to the array
 a={78,96,54,85,65,21,45,36,54,5}

// index number is a poisitional number given to every element of array

Index number starts from 0





*/