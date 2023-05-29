#include <iostream>
using namespace std;
template <class m,class k>
class demo
{
public:
    m a;
    k b;
    demo(m a, k b)
    {
        this->a = a;
        this->b = b;
    }
    ~demo()
    {
        cout<<"I am detsructor";
    }
    void addition()
    {
        k answer = a + b;
        cout << "Answer= " << answer;
    }
};

int main()
{
    demo<float,int> d1(25.32, 45.32);
    demo<int,float> d2(20, 87);
    demo<string,string> d3("hello","WERgrt");
    d1.addition();
    d2.addition();
    d3.addition();
    return 0;
}