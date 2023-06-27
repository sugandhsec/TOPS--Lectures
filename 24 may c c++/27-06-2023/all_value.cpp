#include <iostream>
using namespace std;
int main()
{
    int a;
    float b;
    string c; // new dataype for string
    char d;
    cout << "ENter A: ";
    cin >> a;
    cout << "ENter B: ";
    cin >> b;
    cout << "ENter D: ";
    cin >> d;
    cout << "ENter C: ";
    // cin >> c;
    cin.ignore();    // scanf(" ");
    getline(cin, c); // gets()
    cout << "Values Are " << a << b << c << d;
    return 0;
}