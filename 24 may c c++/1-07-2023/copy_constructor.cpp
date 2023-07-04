#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    student() {} // default constrcutor

    student(student &t) // copy constructor
    {
        rollno = t.rollno;
    }
    void display()
    {
        cout << "Value of roll no is : " << rollno << endl;
    }
};
int main()
{

    student s1;
    s1.rollno = 180;
    student s2(s1);
    s1.display();
    s2.display();
    return 0;
}