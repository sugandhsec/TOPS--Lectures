#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "I am a conbstrcutor: ";
    }
    void fun1()
    {
        cout << " I am Function 1: " << endl;
    }
    void fun2()
    {
        cout << " I am Function 2: " << endl;
    }
    ~demo()
    {
        cout << " I am desctructor: " << endl;
    }
};
int main()
{
    demo d1, d2, d3;
    d1.fun1();
    d2.fun1();
    d3.fun2();
    return 0;
}
/*
    constructorname(classname)(parameters)
    {
        body of the cobnstructor
    }
    ~destructor(classname)(parameters)
    {
       body of destructor
    }



*/