#include <iostream>
using namespace std;

class A
{
protected:
    int id;

public:
    void setID(int id)
    {
        this->id = id;
    }
};

class B : public A
{
protected:
    string name;

public:
    void setName(string name)
    {
        this->name = name;
    }
};

class C
{
protected:
    float sal;
    string dept;

public:
    void setData(float sal, string dept)
    {
        this->sal = sal;
        this->dept = dept;
    }
};

class D : public B,public C{
    public:
    void getData(){
        cout<<id<<" "<<name<<" "<<sal<<" "<<dept<<endl;
    }
};

int
main()
{
    D d1;
    d1.setID(101);
    d1.setName("Bony");
    d1.setData(1234.34,"SE");
    d1.getData();
    return 0;
}