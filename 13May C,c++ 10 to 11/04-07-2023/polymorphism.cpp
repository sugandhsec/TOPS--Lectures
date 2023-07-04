#include <iostream>
using namespace std;
// Function overloading
class demo
{
public:
    void calculation()
    {
        cout << "0 paramater: " << endl;
    }
    void calculation(int a)
    {
        cout << "1 paramater: " << endl;
    }
    void calculation(int m, int n)
    {
        cout << "2 paramater: " << endl;
    }
    // void calculation(int t,int u)
    // {

    // }
    void calculation(int x, int y, int z)
    {
        cout << "3 paramater: " << endl;
    }
};
int main()
{
    demo d1;
    d1.calculation();
    d1.calculation(45);
    d1.calculation(25,36);
    d1.calculation(45,89,63);

    return 0;
}
/*
polymorphism

poly ---many
morphism ----froms

There are tow types of polymorphism
1--Compile time Polymorphism
    a--Function overloading
    b--operator overloading
2--Run time Polymorphism
    a--Virtual function


*/