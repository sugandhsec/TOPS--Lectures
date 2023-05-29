#include <iostream>
using namespace std;
class demo
{
public:
    int a, b;
    void getvalue()
    {
        cout << "Enter two Values: ";
        cin >> a >> b;
    }
    void showdata()
    {
        cout << "a= " << a << " b= " << b;
    }
    // friend void fun1(demo);
};
// void fun1(demo d)
// {
//     cout << d.a << d.b;
// }
class childemo : public demo
{
public:
    int x, y;
    void getdata()
    {
        cout << "Enter two Values: ";
        cin >> x >> y;
    }
    void printdata()
    {
        cout << "x= " << x << " y= " << y;
    }
    friend void fun2(childemo);
};

void fun2(childemo cd)
{
    cout << cd.x << cd.y << cd.a << cd.b;
}
int main()
{
    childemo d1;
    d1.getdata();
    d1.getvalue();
    d1.showdata();
    d1.printdata();
    fun2(d1);
    return 0;
}