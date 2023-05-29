#include<iostream>
using namespace std;

class Area{
    protected:
    int r,l,w;
    public:
    void setRadius(int r){
        this->r=r;
    }
    void setLW(int l,int w){
        this->l=l;
        this->w=w;
    }
};

class areaCircle : public Area{
    public:
    void Area_Circle(){
        cout<<"Area of circle is "<<3.14*r*r<<endl;
    }
};
class areaRectangle : public Area{
    public:
    void Area_Rectangle(){
        cout<<"Area of Rectangle is "<<l*w<<endl;
    }
};

int main()
{
    areaCircle c1;
    c1.setRadius(5);
    c1.Area_Circle();
    areaRectangle r1;
    r1.setLW(7,8);
    r1.Area_Rectangle();
return 0;
}