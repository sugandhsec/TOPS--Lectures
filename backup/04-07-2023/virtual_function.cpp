#include <iostream>
using namespace std;
class A
{
public:
    virtual void demo()
    {
        cout << " i am function of A class ";
    }
};
class B : public A
{
public:
    void demo()
    {
        cout << " i am function of B class ";
    }
};
int main()
{
    A a1;
    B b1;
    a1.demo();
    b1.demo();

    return 0;
}