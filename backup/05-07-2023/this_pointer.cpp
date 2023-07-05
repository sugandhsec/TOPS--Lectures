#include <iostream>
using namespace std;
class calculation
{
public:
    int a;
    int b;
    void getdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void displaydata()
    {
        cout << "A=" << a << " B= " << b << endl;
    }
};
int main()
{
    calculation c1;
    c1.getdata(45, 26);
    c1.displaydata();
    return 0;
}