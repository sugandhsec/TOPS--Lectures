#include <iostream>
using namespace std;
class demo
{
public:
    int a;
    demo()
    {
    }
    demo(demo &t) // copy constructor
    {
        cout << &t;
        a = t.a;
    }
    void getdata()
    {
        cout << "a=" << a << endl;
    }
    // demo(int m)
    // {
    //     cout << "M= " << m;
    // }
};
int main()
{
    demo d1;
    d1.a = 108;
    demo d2(d1);
    cout << &d1;
    d1.getdata();
    d2.getdata();
    return 0;
}