#include<iostream>
using namespace std;

class A{
    public:
    void display(){
        cout<<"Hello Everyone..!!"<<endl;
    }
};
class B{
    public:
    void display(){
        cout<<"Namaste..!!"<<endl;
    }
};

class C: public A,public B{
    public:
    void display(){
        B::display();
    }
};

int main()
{
    C c1;
    c1.display();
return 0;
}