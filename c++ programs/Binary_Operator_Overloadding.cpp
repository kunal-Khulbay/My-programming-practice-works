/*Author: ALOK KHULBAY.
Date:16-09-2020.
Purpose:To self learn.
Program to add two numbers using Binary Operator Overloading.
*/
#include <iostream>
using namespace std;
class abc
{
public:
    int a;
    abc()
    {
        a = 0;
    }
    abc(int n)
    {
        a = n;
    }
    abc operator+(abc obj1)
    {
        abc add;
        add.a = a + obj1.a;
        return add;
    }
    void display();
    ~abc()
    {
    }
};
void abc::display()
{
    cout << "Final Values are:" << a << endl;
}
int main()
{
    abc x(30), y(20), sum;
    sum = x + y;
    x.display();
    y.display();
    sum.display();
    return 0;
}