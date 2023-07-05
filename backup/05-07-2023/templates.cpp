#include <iostream>
using namespace std;
template <class T, class P>
class calculator
{
public:
    T a;
    P b;
    void getdata(T x, T y)
    {
        cout << "x=" << x << "y=" << y << endl;
        a = x;
        b = y;
    }
    void addition()
    {
        T answer = a + b;
        cout << "Addition= " << answer << endl;
    }
    void Subtrcation()
    {
        P sub = a - b;
        cout << "Addition= " << sub << endl;
    }
};
int main()
{
    calculator<int, float> c1;
    c1.getdata(23, 14);
    c1.addition();
    c1.Subtrcation();
    calculator<float, double> c2;
    c2.getdata(45.23, 12.89);
    c2.addition();
    c2.Subtrcation();
    return 0;
}