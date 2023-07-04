#include <iostream>
using namespace std;
class one
{
public:
    int x = 85;
    float y = 48.32;
};
class two:public one
{
public:
    int x = 105;
    float n = 45.369;
};
class three:public one
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
    return 0;
}