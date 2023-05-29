#include<iostream>
using namespace std;

void Area(int r){
    cout<<"Area of circle is "<<3.14*r*r<<endl;
}

void Area(int l,int w){
    cout<<"Area of rectangle is "<<l*w<<endl;
}

int main()
{
    Area(5,6);
    Area(5);
return 0;
}