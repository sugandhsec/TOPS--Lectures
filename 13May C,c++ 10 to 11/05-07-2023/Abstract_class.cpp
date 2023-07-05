#include <iostream>
using namespace std;
class base // abstract class
{
public:
    int a = 45;
    virtual void showvalue()=0; // pure virtual function

    void print()
    {
        cout << "I am Base class print function";
    }
};
class Derived : public base
{
public:
    int b = 4025;
    void showvalue()
    {
        cout << "I AM A FUNCTION OF Derived CLASS";
        cout << "B= " << b << endl;
        cout << a;
        print();
    }
};
int main()
{
    base b1;
    Derived d1;
    b1.showvalue();
    d1.showvalue();
    return 0;
}