/*Author: ALOK KHULBAY.
Date:05-10-2020.
Purpose:To self learn.
Program to compute square value to show inheritance.
*/
#include <iostream>
using namespace std;
class Base
{
    int a;
    ;

public:
    void seta(int n)
    {
        a = n;
    }
    void showa()
    {
        cout << "Square of " << a << " is " << a * a << endl;
    }
};
class Derived : public Base
{
    int b;

public:
    void setb(int n)
    {
        b = n;
    }
    void showb()
    {
        cout << "Square of " << b << " is " << b * b << endl;
    }
};
int main()
{
    Derived d;
    d.seta(4);
    d.setb(5);
    d.showa();
    d.showb();
    return 0;
}
