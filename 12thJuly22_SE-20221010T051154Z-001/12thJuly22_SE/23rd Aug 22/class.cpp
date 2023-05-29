#include<iostream>
using namespace std;

class Display{
    public:
    void display(){
        cout<<"Good Morning..!!"<<endl;
    }
    void display1(){
        cout<<"Good Afternoon..!!"<<endl;
    }
};

int main()
{
    Display d1,d2;
    d1.display();
    d1.display1();
    d2.display1();
return 0;
}