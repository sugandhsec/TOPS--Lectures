#include <iostream>
using namespace std;

class A
{
    int a, b, c;

public:
    A()
    {
        cout << "Constructor is calling..!!" << endl;
    }
    A(int c)
    {
        this->c = c;
        cout<<"The value of c is "<<c<<endl;
    }
    A(int a,int b){
        this->a=a;
        this->b=b;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main()
{
    A a1(4,8),a2,a3(6);
    return 0;
}