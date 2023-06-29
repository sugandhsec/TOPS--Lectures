#include <iostream>
using namespace std;
class student
{
public:         // access modifiers
    int rollno; // data members
    string name;

    void getdata(); // member function or method
    // {
    //     cout << "Enter ROllno: ";
    //     cin >> rollno;
    //     cout << "Enter NAme: ";
    //     cin.ignore();
    //     getline(cin, name);
    // }
    void displaydata()
    {
        cout << "NAme= " << name << " Roll no= " << rollno << endl;
    }
};
void student::getdata() // method define outside class
{
    cout << "Enter ROllno: ";
    cin >> rollno;
    cout << "Enter NAme: ";
    cin.ignore();
    getline(cin, name);
}
int main()
{
    student s1, s2, s3;
    s1.getdata();
    s1.displaydata();
    s2.displaydata();
    // name = "hello";
    // s1.name = "Sugandh Gupta";
    // cout << "s1=" << s1.name;
    // cout << "s2= " << s2.name;
    // cout << "s3= " << s3.name;
    return 0;
}
/*
class is declared outside of main()

class classname
{
    variables----data members
    functions----method---member function

};

object is defined in main()

classname objectname;

*/