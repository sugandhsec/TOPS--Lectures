#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " " << b;
    }
    A operator+(A obj)
    {
        A temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    A a1(10, 2), a2(20, 3), a4(30, 4), a5(40, 6);
    A a3 = a1 + a2 + a5;
    a3.display();
    return 0;
}