#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
    A(){}
    A(int a,int b){
        this->a=a;
        this->b=b;
    }
    void display(){
        cout<<a<<" "<<b<<endl;
    }
    A operator+(A obj){
        A temp;
        temp.a = a+obj.a;
        temp.b = b+obj.b;
        return temp;
    }
};

int main()
{
    A a1(3,4),a2(4,5),a3(6,7);
    A a4 = a1+a3+a2;
    a4.display();
return 0;
}