#include<iostream>
using namespace std;

class Base{
    // public:
    void display(){
        cout<<"This is display function of class Base"<<endl;
    }
};

int main()
{
    Base b1;
    b1.display();
return 0;
}