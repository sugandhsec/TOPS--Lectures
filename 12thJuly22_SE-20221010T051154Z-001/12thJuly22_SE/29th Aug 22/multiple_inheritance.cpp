#include<iostream>
using namespace std;

class Base1{
    protected:
    int a;
    public:
    void setA(int a){
        this->a=a;
    }
};
class Base2{
    protected:
    int b;
    public:
    void setB(int b){
        this->b=b;
    }
};

class Derived: public Base1,public Base2{
    public:
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main()
{
    Derived d1;
    d1.setA(4);
    d1.setB(8);
    d1.display();
return 0;
}