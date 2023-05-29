#include <iostream>
using namespace std;
class state // abstract class
{
public:
    virtual void showdata() {}   // pure virtual function
    virtual void showdata() = 0; // pure virtual function
};
class district : public state
{
public:
    void showdata()
    {
        cout << "I am District class and child of state class";
    }
};
int main()
{
    state s1;
    district d1;
    s1.showdata();
    d1.showdata();
    return 0;
}