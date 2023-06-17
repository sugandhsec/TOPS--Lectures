// function without parameter and without return value
#include <stdio.h>
void greet(); // function declaration
void greet()  // finction definition
{
    int a;
    int m = 45;
    printf("%d", x);
    printf("Enter Number: ");
    scanf("%d", &a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d =%d\n", a, i, a * i);
    }
}
int main()
{
    int x = 45;
    printf("%d", m);
    greet();
    printf("Another Calling: ");
    greet();
    return 0;
}
/*
function is a block of code which is executed whenever we called it

there are two types function
1)user defined function
2)Inbuilt functions --printf(),scanf(),sizeof(),type(),gets()



user defined function
1--function declaration
    returntype functionname(parameters);

    return type ----datatype int ,float,char,void

    functionname--is of user choice

    parameters---variables

declaration is always above main()
2--function definition
    returntype functionname(parameters)
    {
        BODY OF THE FUNCTION
    }
definition is above or below the main()

3---function calling

variable=functionname(parameters)

User defined functiion has four types

1--function with parameter and with return value
2--function without parameter and with return value
3--function with paremeter and without return value
4---function without parameter and without return value

*/