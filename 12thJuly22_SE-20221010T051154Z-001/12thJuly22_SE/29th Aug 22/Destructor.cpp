#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Constructor is calling..!"<<endl;
    }
    ~A(){
        cout<<"Destructor is calling..!!"<<endl;
    }
};

int main()
{
    A a1;
return 0;
}