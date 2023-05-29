#include <iostream>
using namespace std;

class demo
{
public:
    int a;
    string b;
    demo() // deafult constructor
    {
        cout << "Sabse pehle call ho gaya";
    }
    void darta()
    {
        cout << "This is user function";
    }
};

int main()
{
    demo d1, d2;
    d1.darta();
    return 0;
}
/*
constructor is a method but of special type

function has its own choice name
but constructor name is same as class name

function is called whenever we write functionname([paramaters])
but constructor is not called by anyone , it will be called automatically when object is defined


its is optional but funcation can return value
but constructor never returns anything no constructor doesn't have return type


constructor is defined to initailize objects members



There are three types of constructor
1)deafult constructor
2)parameterised constructor
3)copy constructor
*/