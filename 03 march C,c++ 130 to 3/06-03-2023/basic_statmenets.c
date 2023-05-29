#include <stdio.h>
int main()
{
    int age;
    float height;
    printf("Enter Your Age and Heigth: ");
    scanf("%f %d", &height, &age);
    // int age,len,wid,height;
    printf("apki umar %d years %.4f hai", age, height);
    
    return 0;
}
/*
Variable---
variable declaration

datatype variablename ;
datatype-----
int %d ------58,65,-96,-58,89,-685,-5,1254
float %f------.36 0.2365 -125.25 -12.36 25.36
char %c--- 'a' '+' '6' ' '

variablename-----as per our choice

rule1----age
1)first character should be A-Z a-z _
2)remaining characters A-Z a-z _ 0-9

suggestion
1)use a logical name
2)length not exceed 255 characters
3)space is not considered

$name *age +hello 12wow
_name age12 user_name

variable definition or initialization

variablename=value;

variable using
by theri name

*/