#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "I am Constructor";
    }
    ~demo()
    {
        cout << "I am Destructor";
    }
};
int main()
{
    demo d1, d2;
    cout << "Hello This is extra lines";

    return 0;
}
