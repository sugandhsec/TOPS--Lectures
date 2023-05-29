#include <iostream>
using namespace std;
class demo
{
public:
    int a[4];

    void getdata()
    {
        for (int i = 0; i < 4; i++)
        {
            cout << "Enter number: ";
            cin >> a[i];
        }
    }

    void operator+(demo d)
    {
        int answer[4];
        for (int i = 0; i < 4; i++)
        {
            answer[i] = a[i] + d.a[i];
            cout << answer[i] << endl;
        }
    }
};
int main()
{
    demo d1, d2;
    d1.getdata();
    d2.getdata();
    d1 + d2;
    return 0;
}
/*
void operator symbol(object)

*/