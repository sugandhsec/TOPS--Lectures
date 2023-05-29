#include <iostream>
using namespace std;
class bank_detail
{
public:
    string name;
    int acc_no;
    string type;
    int balance;

    void getvalue()
    {
        cout << "ENter Name: ";
        getline(cin, name);
        cout << "Enter Account Number: ";
        cin >> acc_no;
        cout << "Enter Account Type: ";
        cin >> type;
        cout << "Enter BALANCE: ";
        cin >> balance;
    }

    void deposit()
    {
        int amount;
        cout << "Enter Amount: ";
        cin >> amount;
        balance = balance + amount;
    }

    void withdraw()
    {
        int amount;
        cout << "Enter Amount to withdraw : ";
        cin >> amount;
        if (amount < balance)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }
    void showdetails()
    {
        cout << "your Name is " << name << " Your balance  is " << balance<<endl;
    }
};

int main()
{

    bank_detail b1, b2;
    b1.getvalue();
    b1.deposit();
    b1.showdetails();
    b2.showdetails();
    return 0;
}