#include <iostream>
using namespace std;
class A
{
public:
    int a = 10;
    void display()
    {
        cout << "A= " << a;
    }
};
class B
{
public:
    int b = 27;
    void display()
    {
        cout << "B= " << b;
    }
};
class C : public A, public B
{
public:
    int x = 78;
    void showdata()
    {
        cout << "x=" << x;
    }
};
int main()
{
    C c1;
    // c1.showdata();
    c1.A::display(); // ambiguity error
    c1.B::display(); // ambiguity error
    return 0;
}