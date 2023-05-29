#include<iostream>
using namespace std;

class Area{
    float r,L,w,l,b,h;
    public:
    Area(){}
    Area(float r){
        this->r=r;
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
    Area(float L,float w){
        this->L=L;
        this->w=w;
        cout<<"Area of rectangle is "<<L*w<<endl;
    }
    Area(float l,float b,float h){
        this->l=l;
        this->b=b;
        this->h=h;
        cout<<"Area of cuboid is "<<2*(l*b + b*h + l*h)<<endl;
    }
};

int main()
{
    Area a1(6.7,4.3),a2(4.5),a3(4,9,12.4),a4;
return 0;
}