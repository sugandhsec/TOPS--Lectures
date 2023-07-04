// Single Inheritance
#include <iostream>
using namespace std;
class A
{
public: // Access Modifier
    int height;
    float width;

    void getvalue()
    {
        cout << "Enter Height ";
        cin >> height;
        cout << "Enter Width ";
        cin >> width;
    }
};
class B : public A
{
public:
    int rollno;
    string name;
    void getdata()
    {
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter rollno: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        // cin>>name;
    }
};
int main()
{
    A a1, a2;
    B b1, b2;
    a1.height;
    b1.getvalue();
    return 0;
}