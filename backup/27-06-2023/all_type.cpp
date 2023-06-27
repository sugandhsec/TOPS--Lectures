#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    string d;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;
    cout << "Enter C: ";
    cin >> c;
    cout << "Enter D: ";
    // cin >> d;
    cin.ignore();
    getline(cin, d);

    cout << "All VAlues " << a << b << c << d;
    return 0;
}