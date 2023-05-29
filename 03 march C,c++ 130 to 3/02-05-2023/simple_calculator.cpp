#include <iostream>
using namespace std;

class calci
{
public:
    int a, b, answer;
    void getvalue()
    {
        cout << "Enter Value: ";
        cin >> a >> b;
    }
    void addition()
    {
        answer = a + b;
        cout << answer;
    }
    void subtract()
    {
        answer = a - b;
        cout << answer;
    }
    void Multiply()
    {
        answer = a * b;
        cout << answer;
    }
    void division()
    {
        answer = a / b;
        cout << answer;
    }
};
int main()
{
    calci c1;
    c1.getvalue();
    c1.addition();
    c1.subtract();

    return 0;
}