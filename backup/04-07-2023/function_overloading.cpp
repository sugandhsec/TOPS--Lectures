#include <iostream>
using namespace std;
class demo
{
public:
    void calculation()
    {
        cout << "I am 0 parameter: " << endl;
    }
    void calculation(int a)
    {
        cout << "I am 1 parameter: " << endl;
    }
    void calculation(int m, int n)
    {
        cout << "I am 2 parameter: " << endl;
    }
    // void calculation(int x, int y)
    // {
    //     cout << "I am 2 parameter: " << endl;
    // }
};
int main()
{
    demo d1;
    d1.calculation();
    d1.calculation(48);
    d1.calculation(36, 12);

    return 0;
}
/*
Function overloading

when same name function is defined in same class but with different number of parameter then it is called as function overloading

*/