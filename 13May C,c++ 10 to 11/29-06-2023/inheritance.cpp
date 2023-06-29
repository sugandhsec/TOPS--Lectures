#include <iostream>
using namespace std;
class person
{
private:
    int age;

    string name;

    void getdata()
    {
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter NAme: ";
        cin.ignore();
        getline(cin, name);
    }

    void showdata()
    {
        cout << "age= " << age << " Name = " << name << endl;
    }
};

class student : public person
{
public:
    int rollno;
    float percentage;

    void getvalue()
    {
        cout << "age" << age;
    }

    void showvalue()
    {
    }
};
int main()
{
    person p1;
    student s1;
    s1.age;
    return 0;
}
/*
parent class---base class---super class
child class----derived class----sub class

Types of inheritance in c++

1---single inheritance
2---multilevel Inheritance
3---Multiple Inheritance
4---Hierarchical Inheritance
5---Hybrid Inheritance
*/