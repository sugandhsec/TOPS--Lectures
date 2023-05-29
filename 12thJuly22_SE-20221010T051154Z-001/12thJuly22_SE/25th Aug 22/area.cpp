#include<iostream>
using namespace std;

class Area{
    int r,l,w;
    public:
    void setRadius(int R){
        r = R;
    }
    void setLW(int L,int W){
        l = L;
        w = W;
    }
    void areaCircle(){
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
    void areaRectangle(){
        cout<<"Area of Rectangle is "<<l*w<<endl;
    }
};

int main()
{
    Area a1,a2,a3;
    a1.setRadius(6);
    a1.areaCircle();
    a2.setLW(7,9);
    a2.areaRectangle();
    a3.setLW(3,4);
    a3.areaRectangle();
    a3.setRadius(5);
    a3.areaCircle();
return 0;
}