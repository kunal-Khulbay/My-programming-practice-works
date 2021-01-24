/*Author:Alok Khulbay.
Date:22/08/2020.
Purpose:To self learn.
Program to learn Multiple data with Multiple Objects
*/
#include <iostream>
using namespace std;
class currency
{
private:
    int rupees;
    float paise;

public:
    void raed()
    {
        cout << "Rupees in integer is:" << endl;
        cin >> rupees;
        cout << "Paise in Real is:" << endl;
        cin >> paise;
    }
    void assign(int rs, float ps)
    {
        rupees = rs;
        paise = ps;
    }
    void display()
    {
        cout << "\n Rupees is:" << rupees << "\nPaise is:" << paise << endl;
    }
};
int main()
{
    currency c1, c2;
    c1.assign(15, 3.76);
    c2.raed();
    cout << "First Ammount is :" << endl;
    c1.display();
    cout << "Second Ammount is :" << endl;
    c2.display();
    return 0;
}