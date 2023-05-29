#include<iostream>
using namespace std;

class Cal{
    int a,b;   // varibles
    public:
    void setData(int x,int y){   //  member functions
        a = x;
        b = y;
    }
    void Addition(){
        cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
    }
};

int main()
{
    Cal c1;
    c1.setData(5,6);
    c1.Addition();
return 0;
}