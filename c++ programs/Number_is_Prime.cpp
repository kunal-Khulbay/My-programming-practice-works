/*Author: ALOK KHULBAY.
DAte:01-09-2020.
Purpose:To self learn.
Program to check weather number is prime or not by using class
*/
#include <iostream>
using namespace std;
class A
{
private:
    int number;

public:
    A(int c)
    {
        number = c;
    }
    void print();
};
void A::print()
{
    int i;
    if (number == 1)
    {
        cout << number << " is Not a prime Number" << endl;
    }
    else
    {
        for (i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                cout << number << " is Not Prime" << endl;
                return;
            }
        }
        cout << number << " is Prime" << endl;
    }
}
int main()
{
    int number;
    cout << "Enter the Number:";
    cin >> number;
    A obj1(number);
    obj1.print();
    return 0;
}