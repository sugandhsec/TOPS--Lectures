#include <iostream>
using namespace std;
class A // abstract class
{
public:
    virtual void demo() = 0; // pure virtual function

    void show()
    {
        cout << "i am show function of A class";
    }
};
class B : public A
{
public:
    void demo()
    {
        cout << " i am function of B class ";
    }
    // show();
};
int main()
{
    A a1;
    B b1;
    a1.demo();
    b1.demo();

    return 0;
}