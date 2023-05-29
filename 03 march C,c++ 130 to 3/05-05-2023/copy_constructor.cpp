#include <iostream>
using namespace std;
class demo
{
public:
    int m;
    demo(demo &obj)
    {
        m = obj.m;
    }
    demo()
    {
        cout << "this is default constructor";
    }
};

int main()
{
    demo d1;
    d1.m = 102;
    demo d2(d1);
    cout << d1.m << d2.m;
    return 0;
}
/*
classname(classname objectname)
{
    body of constructor
}

*/

// void data(int x)
// {
//     cout<<x;
// }

// int k=85
// data(k)