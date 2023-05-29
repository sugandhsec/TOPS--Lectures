// base class--parent class---super class
// derived class---child classs---sub class
#include <iostream>

using namespace std;
class p
{
public:
    int a;
    float m;
};
class k:public p
{
public:
    int a;
    float m;
};
class b : public k
{
public:
    int g;
    int h;

    void getvalue()
    {
        cout << "Enter G: ";
        cin >> g;
        cout << "Enter H: ";
        cin >> h;
        // cout << "Enter A: ";
        // cin >> a;
        // cout << "Enter M: ";
        // cin >> m;
    }
};
int main()
{
    p p1, p2;
    b b1, b2;
    return 0;
}