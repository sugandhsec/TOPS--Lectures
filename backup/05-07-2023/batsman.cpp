#include <iostream>
using namespace std;
class cricketer
{
public:
    int run[5];

    void getrun()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Run :";
            cin >> run[i];
        }
    }
};
class batsman : public cricketer
{
public:
    int total = 0;
    float average;
    int best_performance = 0;
    void gettotal()
    {
        for (int i = 0; i < 5; i++)
        {
            total += run[i];
        }
    }

    void calculate_average()
    {
        average = float(total) / 5;
    }
    void best_perform()
    {
        for (int i = 0; i < 5; i++)
        {
            if (run[i] >= average)
            {
                best_performance++;
            }
        }
    }

    void displaydata()
    {
        cout << "Total= " << total << endl;
        cout << "Average= " << average << endl;
        cout << "Best Performance= " << best_performance;
    }
};
int main()
{
    batsman b1, b2, b3;
    b1.getrun();
    b1.gettotal();
    b1.calculate_average();
    b1.best_perform();
    b1.displaydata();
    // if(b1.average>b2.average)
    // {

    // }

    return 0;
}