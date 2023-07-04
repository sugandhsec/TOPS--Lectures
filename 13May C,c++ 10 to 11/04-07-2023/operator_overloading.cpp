#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    void addition(int a, int b)
    {
        cout << a + b << endl;
    }

    void operator+(demo t)
    {
        a = a + t.a;
    }
};
int main()
{

    demo d1, d2;
    d1.a = 85;
    d2.a = 12;
    d1 + d2;

    cout << d1.a;
    cout << d2.a;
    // d1.+(d2);
    // d1.addition(45, 36);
    // int k = 101;
    // int l = 56;
    // d2.addition(k, l);
    return 0;
}
/*

void operator+(class object)
{
    body
}
*/