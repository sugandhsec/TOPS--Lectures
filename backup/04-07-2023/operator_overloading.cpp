#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    void showvalue()
    {
        cout << "Value of a is " << a << endl;
    }
    void operator-(demo t)
    {
       cout<<a+t.a;
    }
};
int main()
{
    demo d1, d2, d3;
    d1.a = 150;
    d2.a = 250;
    // cout << d1.a + d2.a;
    // cout << 58 + 36;
    d1 - d2;
    // d1.operator+(d2);
    return 0;
}
/*
operator overloading
    void operator symbol(class object)
    {
        body of operator overloading
    }
*/