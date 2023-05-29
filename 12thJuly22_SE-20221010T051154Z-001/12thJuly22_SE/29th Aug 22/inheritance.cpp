#include<iostream>
using namespace std;

class Base{
    protected:
    int a,b;
    public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
};

class Derived : public Base{
    public:
    void Addition(){
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
    void subtraction(){
        cout<<"subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
    }
};

int main()
{
    Derived d1;
    d1.setData(5,6);
    d1.Addition();
return 0;
}