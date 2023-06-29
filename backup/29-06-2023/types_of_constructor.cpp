#include <iostream>
using namespace std;
class A
{
public:
    int a = 10;
    A() // deafult constructor
    {
        cout << "I am default constructor";
    }
    A(int x) // parameterised constructor
    {
        cout << "X= " << x << endl;
    }
    A(int m, int n) // parameterised constructor
    {
        cout << "M= " << m << " N= " << n << endl;
    }
    void display()
    {
        cout << "A= " << a;
    }
};
int main()
{
    A a1(48), a2,a3(105,96);
    return 0;
}
/*
parameterised Constructor

*/