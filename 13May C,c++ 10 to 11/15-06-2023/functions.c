#include <stdio.h>
// void greet(); // function declaration
void greet() // function definition
{
    for (int i = 0; i < 10; i++)
    {
        printf("good Morning\n");
    }
}

int main()
{
    greet(); // function Calling
    // greet();
    return 0;
}

/*
function is declare or define ourtose of mai n function

function declaration
it's always before main()

returntype functionanme(parameters)

returntype datatype---int,float,char,void
functionname----identifier rule
parameters---variables

int demo(int x,int y,float c);


function definition
int demo(int x,int y,float c)
{
    body
}



function calling
int m;
m=demo(25,45,12.23);
*/