#include <iostream>
using namespace std;
class demo
{
public:
    int a = 20;
    int b = 40;

    void showdata()
    {
       cout << "A= " << a << " B= " << b << endl;
    }

    void operator+(demo d)
    {
        a = a + d.a;
        b = b + d.b;
    }   
};
int main()
{
    demo d1, d2;
    // d1.showdata()
    // d1.+(d2);
    // d1.+(d2);
    d1 + d2;
    // d2+d1;
    d1.showdata();
    d2.showdata();
    return 0;
}
/*
void operator symbol(object)

*/