/*Author: ALOK KHULBAY.
Date:26-09-2020.
Purpose:To self learn.
Program to overload all the Arithmetic Operators.
*/
#include <iostream>
using namespace std;
class A
{
    int n;

public:
    void input()
    {
        cin >> n;
    }
    void operator+(A z)
    {
        cout << "Sum is==>" << n + z.n << endl;
    }
    void operator-(A z)
    {

        cout << "Their difference is==>" << n - z.n << endl;
    }
    void operator*(A z)
    {
        cout << "Product is==>" << n * z.n << endl;
    }
    void operator/(A z)
    {
        cout << "Quotient is ==>" << n / z.n << endl;
    }
    void operator%(A z)
    {
        cout << "Remainder is ==>" << n % z.n << endl;
    }
};
int main()
{
    int choice;
    A a, a1;
    cout << "Enter First Number==>";
    a.input();
    cout << "Enter Second Number==>";
    a1.input();
back:
    cout << "Press 1 for Addition \n";
    cout << "Press 2 for Substraction \n";
    cout << "Press 3 for Multiplacition \n";
    cout << "Press 4 for Quotient \n";
    cout << "Press 5 for Remainder \n";
    cout << "Enter your choice...";
    cin >> choice;
    switch (choice)
    {
    case 1:
        a + a1;
        break;
    case 2:
        a - a1;
        break;
    case 3:
        a *a1;
        break;
    case 4:
        a / a1;
        break;
    case 5:
        a % a1;
        break;

    default:
        cout << "Entered choice incorrect.\n";
        goto back;
    }
    return 0;
}