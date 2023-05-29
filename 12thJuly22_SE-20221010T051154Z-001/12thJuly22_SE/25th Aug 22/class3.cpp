#include<iostream>
using namespace std;

class Cal{
    int a,b;   
    public:
    void setData(int x,int y);
    void Addition();
};

void Cal::setData(int x,int y){
    a = x;
    b = y;
}

void Cal::Addition(){
    cout<<"Addition is "<<a+b<<endl;
}

int main()
{
    Cal c1;
    c1.setData(5,6);
    c1.Addition();
return 0;
}