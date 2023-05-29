#include <iostream>
using namespace std;
class lecture_details
{
public:
    string lecturername, subjectname, coursename;
    int number_of_lecture;

    lecture_details()
    {
        lecturername = "";
        subjectname = "";
        coursename = "";
        number_of_lecture = 0;
    }

    void getlecture()
    {
        cout << "ENter lecturer name: ";
        cin.ignore();
        getline(cin, lecturername);
        cout << "ENter subject name: ";
        getline(cin, subjectname);
        cout << "ENter course name: ";
        getline(cin, coursename);
        cout << "ENter number of lecture : ";
        cin >> number_of_lecture;
    }

    void showlecture()
    {
        cout << lecturername << subjectname << coursename << number_of_lecture;
    }
};
int main()
{
    int n;
    cout << "Enter Totla Nuimber: ";
    cin >> n;
    lecture_details a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].getlecture();
        a[i].showlecture();
    }

    return 0;
}