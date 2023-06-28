#include <iostream>
using namespace std;
class demo  //encapsdulation
{
public:
    int rollno;

    void getdata()
    {
        cout << "Enter Rollno; ";
        cin >> rollno;
    }
    void showdata()
    {
        cout << "Rollno= " << rollno;
    }
};
int main()
{
    demo d1, d2, d3;
    d1.showdata();
    return 0;
}
/*
constructor is a special method which is used to initailze object variables

function ---return type
constructor does not have return type

functionname is of our choice
constructor is same name as classname

constructor does not return anything

function is called and code executes
but constructor is called automatically when object is initailized


*/