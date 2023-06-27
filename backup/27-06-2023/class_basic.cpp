#include <iostream>
using namespace std;
class student
{
public: // access modifier
    int rollno;
    string name;
    int marks[5];

    void getdata()
    {
        cout << "Enter Rollno: ";
        cin >> rollno;

        cout << "ENter Name: ";
        // cin >> name;
        cin.ignore();
        getline(cin, name);
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Marks: ";
            cin >> marks[i];
        }
    }
    int sum=0;
    void total()
    {
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
    }
    void showdata()
    {
        cout << "Name= " << name << "Rollno " << rollno << "Total=" << sum;
        ;
    }
};
int main()
{
    student s1, s2, s3;
    s1.getdata();
    s1.total();
    s1.showdata();

    return 0;
}
/*
class--class is a blueprint of object that ho an object look like and behave

object ---object is an entity of class

outside of main()
class classname
{
    variables ----data member
    functions ---- methods or member function

};


*/