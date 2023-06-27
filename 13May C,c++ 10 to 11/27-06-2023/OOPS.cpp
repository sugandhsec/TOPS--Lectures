#include <iostream>
using namespace std;
class student
{
public:
    int rollno;
    string name;
    int marks[5];

    void getdata()
    {
        cout << "ENter  rollno: ";
        cin >> rollno;

        cout << "Enter NAme: ";
        cin.ignore();
        getline(cin, name);

        for (int i = 0; i < 5; i++)
        {
            cout << "Enter MArks: ";
            cin >> marks[i];
        }
    }
    int sum = 0;
    void total()
    {
        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }
    }
    void displaydata()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << endl;
        }
        cout << "All data= " << rollno << " " << name << " " << sum;
    }
};

int main()
{
    student s1, s2, s3;  //objects
    s1.getdata();
    s1.total();
    s1.displaydata();
    cout << "S2 display" << endl;
    s2.displaydata();
    return 0;
}
/*
class----class is a blueprint which tells what objects can do
object----object is a instance of class

************class************
class classname
{
    access modifier
    variables
    functions
};

********object****************
classname objectname;

*/