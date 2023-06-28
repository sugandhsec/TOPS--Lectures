#include <iostream>
using namespace std;
class base
{

public: // access modifiers
    // private:
    int a = 10;

    int b = 20;

    void addition()
    {
        int answer = a + b;
        cout << "Addition= " << answer << endl;
    }
};
class Derived : public base
{
public:
    int c = 60;
    int d = 12;

    void subtraction()
    {
        int answer = c - d;
        int add = a + b;
        cout << "Subtraction = " << answer << endl;
    }
};

int main()
{
    base b1;
    Derived d1;
    d1.addition();
    d1.subtraction();
    b1.a = 45;
    return 0;
}
/*
when properties of one class is used by another class then it is called as inheritance

base class-----parent classs-----super class
derived class-----child class-----sub class

// there are 5 types of Inheritance
1---single inheritance
2---multilevel Inheritance
3----multiple Inheritance
4---Hierarchical inheritance
5---Hybrid Inheritance



*/