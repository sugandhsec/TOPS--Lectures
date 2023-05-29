#include<iostream>
using namespace std;

class Area{
    float r;
    public:
    Area(float r){
        this->r=r;
    }
    void areaCircle(){
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
};

int main()
{
    // Area a1(5.6);   //  implicit call
    Area a1 = Area(5.6);  //  Explicit call
    a1.areaCircle();
return 0;
}