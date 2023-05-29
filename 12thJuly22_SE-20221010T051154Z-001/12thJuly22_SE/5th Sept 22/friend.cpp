#include<iostream>
using namespace std;

class B;
class C;
class A{
    int a;
    public:
    A(int a){
        this->a=a;
    }
    friend void Addition(A a,B b,C c);

};
class B{
    int a;
    friend void Addition(A a,B b,C c);
    public:
    B(int a){
        this->a=a;
    }

};
class C{
    int a;
    public:
    C(int a){
        this->a=a;
    }
    friend void Addition(A a,B b,C c);
};

void Addition(A a,B b,C c){
    cout<<a.a+b.a+c.a<<endl;
}

int main()
{
    A a1(20);
    B b1(30);
    C c1(40);
    Addition(a1,b1,c1);
return 0;
}