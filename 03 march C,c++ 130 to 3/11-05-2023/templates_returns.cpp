#include <iostream>
using namespace std;
template <class T>
class sorting
{
public:
    T a, b, answer;
    T height;
    void getdata()
    {
        cout << "Enter A,b: ";
        cin >> a >> b;
        answer = a + b;
        cout << "Answer= " << answer << endl;
        cout << "Enter Height ";
        cin >> height;
    }
};
int main()
{
    sorting<int> s1;
    sorting<double> s2;
    sorting<float> s3;
    s1.getdata();

    return 0;
}