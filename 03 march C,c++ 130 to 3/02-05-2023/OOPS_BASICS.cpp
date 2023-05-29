/*
Class and objects

Class is a blueprint

functions---method---member function---behvaiour
variables---data members--attribute

Object

every properties of class is inside the object


*/

#include <iostream>
using namespace std;
class student
{
public: // access modifiers
    int a, b;

    void getvalue()
    {
        cout << "Enter Value OF a nd b: ";
        cin >> a >> b;
    }

    void showdata()
    {
        cout << "A= " << a << " B= " << b;
    }
};

int main()
{
    // classname objetcname;
    student s1, s2, s3;
    s1.getvalue();
    s1.showdata();
    s2.showdata();
    return 0;
}