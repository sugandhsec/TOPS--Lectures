#include <iostream>
using namespace std;

class Shop
{
    static int id;
    string name;
    float price;

public:
    void setData(string n, float p)
    {
        name = n;
        price = p;
    }
    void getData()
    {
        id++;
        cout << id << " " << name << " " << price << endl;
    }
};

int Shop::id = 500;

int main()
{
    Shop s1, s2, s3, s4, s5;
    s1.setData("Biscuit", 45);
    s2.setData("Sugar", 34.56);
    s3.setData("Salt", 64.56);
    s4.setData("Oil", 554.56);
    s5.setData("Milk", 54.56);
    s1.getData();
    s2.getData();
    s3.getData();
    s4.getData();
    s5.getData();
    return 0;
}