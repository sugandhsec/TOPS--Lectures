#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    int age;

    student() // default constructor
    {
        rollno = 0;
        age = 0;
        cout << "Enter Rollno anfd age: ";
        cin >> rollno >> age;
    }
    student(int r, int a) // parameterised constructor
    {
        rollno = r;
        age = a;
    }
    student(int m) // parameterised constructor
    {
        rollno = m;
        age = 45;
    }

    void display(int a, int b)
    {
        cout << "Your rollno is " << rollno << endl;
        cout << "Your age is " << age << endl;
    }
};
int main()
{
    student s1, s2(1001,25), s3;
    s1.display(85, 25);
    s2.display(98, 14);
    return 0;
}
/*
constructor is a special function

constrcutor is used to initailize values

function has return type
while constructor doesnot have return type

function has any name
but constructor name is same as class name

function is executed when we call the function
constructor will be called automatically

any object can call all functions inside class
but object can call only one constructor inside class

there are three type of constructor
1---default constrcutor
2---paramaterised constructor
3--copy constructor

*/