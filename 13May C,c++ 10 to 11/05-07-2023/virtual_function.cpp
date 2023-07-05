#include <iostream>
using namespace std;
class base
{
public:
    int a = 45;
    virtual void showvalue()
    {
        cout << "I AM A FUNCTION OF BASE CLASS";
        cout << "A= " << a << endl;
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