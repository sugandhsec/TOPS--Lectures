#include <iostream>
using namespace std;
class world;
class demo
{
public:
    int a = 50;
    void showvalue()
    {
        cout << "A=" << a << endl;
    }
    friend void allval(demo d1, world w1); // declare
};
class world
{
public:
    int b = 456;
    void shwodata()
    {
        cout << "B=" << b << endl;
    }
    friend void allval(demo d1, world w1);
};
void allval(demo d1, world w1) // definition of friend function
{
    cout << "A= " << d1.a << "B =" << w1.b;
}
int main()
{
    demo d1;
    world w1;
    allval(d1, w1);
    return 0;
}