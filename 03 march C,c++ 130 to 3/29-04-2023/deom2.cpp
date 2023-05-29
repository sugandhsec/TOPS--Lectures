#include <iostream>
using namespace std;
int main()
{
    // char name[50]="vaibhav Mathukiya";
    string name;
    cout << "Enter Name: ";
    // cin >> name;
    getline(cin, name);
    cout << "Your name is " << name;

    return 0;
}