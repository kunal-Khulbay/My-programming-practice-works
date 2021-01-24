/*Author:-Alok Khulbay.
Date:-24/08/2020
Purpose:To self learn.
Program to learm Define Funvttion outside the class
*/
#include <iostream>
using namespace std;
class Account
{
private:
    int Acc_Number;
    char name[20];
    float balance;

public:
    void Read();
    void Write();
};
void Account::Read()
{
    cout << "Enter the Account Number,Name and Balance:";
    cin >> Acc_Number >> name >> balance;
}
void Account::Write()
{
    cout << "Account Number is:";
    cout << Acc_Number << endl;
    cout << "Name of Customer is:" << name << endl;
    cout << "Balance is:" << balance << endl;
}
int main()
{
    class Account a1;
    a1.Read();
    a1.Write();
    return 0;
}
