#include <iostream>
using namespace std;
class one
{
public:
    int x = 85;
    float y = 48.32;
};
class two
{
public:
    int x = 105;
    float n = 45.369;
};
class three : public two, public one
{
public:
    int a = 78;
    float b = 1425.32;
};
int main()
{
    one o1;
    two t1;
    three tw1;
    tw1.two::x = 58;
    tw1.two::x = 45;
    tw1.y = 56;
    return 0;
}