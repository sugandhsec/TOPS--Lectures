#include <iostream>
using namespace std;
void recursive(int a)
{
    if (a > 20)
    {
        cout << "hello Wolrd: ";
        recursive(a - 1);
    }
}
int main()
{
    recursive(26);
    return 0;
}