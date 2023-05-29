#include<stdio.h>

// void greet1()    // declaration of the fun.
void greet2(){
    printf("Good Afternoon..!!\n");
}
void greet1(){     // define fun.
    printf("Good Morning..!!\n");
    greet2();
}
int main()
{
    greet1();   // fun calling...
    // greet1();
    // greet2();
    return 0;
}


