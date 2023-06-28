#include <iostream>
using namespace std;
class calculation
{
public:
    int a, b, answer;

    calculation()
    {
        cout << "hello Wolrd";
    }

    void getdata()
    {
        cout << "Enter Value of a and b: ";
        cin >> a >> b;
    }

    void addition()
    {
        answer = a + b;
        cout << "Anser= " << answer;
    }
};
int main()
{
    calculation c1, c2;
    c1.getdata();
    c1.addition();
    c2.addition();
    return 0;
}
/*
constructor is a function of sepicial type

function have return type which shows what value to be return

constructor does not have return type so it never return anything

constructor name will be same as class name

function will be executed whenever it will be called
constructor will be called automatically when object is defined

*/