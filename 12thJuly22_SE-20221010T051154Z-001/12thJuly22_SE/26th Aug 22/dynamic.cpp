#include<iostream>
using namespace std;

class A{
    int r;
    float R;
    public:
    A(){}
    A(int r){
        this->r=r;
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
    A(float R){
        this->R=R;
        cout<<"Area of circle is "<<3.14*R*R<<endl;
    }
};

int main()
{
    A a1((float)5.6),a2(4);
return 0;
}