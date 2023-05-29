#include<iostream>
using namespace std;

class A{
    protected:
    int id;
    public:
    void setID(int id){
        this->id=id;
    }
};
class B : public A{
    protected:
    string name;
    public:
    void setName(string name){
        this->name = name;
    }
};

class C: public B{
    float sal;
    public:
    void setSal(float sal){
        this->sal=sal;
    }
    void getData(){
        cout<<id<<" "<<name<<" "<<sal<<endl;
    }

};

int main()
{
    C c1;
    c1.setID(101);
    c1.setName("Arpit");
    c1.setSal(123.45);
    c1.getData();
return 0;
}