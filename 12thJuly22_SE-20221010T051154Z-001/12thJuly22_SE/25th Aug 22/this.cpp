#include<iostream>
using namespace std;

class Cal{
    int a,b;   
    public:
    void setData(int a,int b){  
       this-> a = a;
       this-> b = b;
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