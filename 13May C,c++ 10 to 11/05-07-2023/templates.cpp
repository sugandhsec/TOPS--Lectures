#include <iostream>
using namespace std;
template <class T, class P>
class calculation
{
public:
    T a;
    T b;

    void getdata()
    {
        cout << "Enter Two Values: ";
        cin >> a >> b;
    }
    void addition()
    {
        P answer = a + b;
        cout << "Addition= " << answer << endl;
    }
    void Subtraction(T m, T n)
    {
        P subtract = m - n;
        cout << "Subtraction= " << subtract << endl;
    }
};
int main()
{
    calculation<int, float> c1;
    c1.getdata();
    c1.addition();
    c1.Subtraction(78, 52);
    calculation<float, double> c2;
    c2.getdata();
    c2.addition();
    c2.Subtraction(12.36, 45.25);
    return 0;
}