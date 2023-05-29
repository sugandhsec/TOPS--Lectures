#include <iostream>
using namespace std;
class calculation
{
public:
    float l, w, area_size;
                                                                                 
    void area()
    {
        // area of circle
        cout << "ENter radius: ";
        cin >> l;
        area_size = 3.14 * l * l;
        cout << "AREA of circle is  " << area_size;
    }

    void area(float m)
    {
        // area of square
        l = m;
        area_size = l * l;
        cout << "AREA of square is  " << area_size;
    }

    void area(float i, float j)
    {
        // area of rectasngle
        l = i;
        w = j;
        area_size = l * w;
        cout << "AREA of rectangle is  " << area_size;
    }
};
int main()
{
    calculation c1;
    c1.area();
    c1.area(25);
    c1.area(101, 102);
    return 0;
}
/*
    Compile Time Polymorphism
        function overloading
        operator overloading
    Run Time Polymorphism
        virtual function

*/