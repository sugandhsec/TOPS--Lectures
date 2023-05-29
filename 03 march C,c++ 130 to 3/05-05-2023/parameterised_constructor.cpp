#include <iostream>
using namespace std;
class demo
{
public:
    demo() //default constructor
    {
        cout << "this is default constructor";
    }
    demo(int a) 
    {
        cout << a;
    }
    demo(int k,int m) 
    {
        cout << k<<m;
    }
    // constructor overloading
};
int main()
{
    demo d1(36,98), d2(98,48),d3(101);
    return 0;
}