/*Author: ALOK KHULBAY.
DAte:28-08-2020.
Purpose:To self learn.
Program to add two numbers to learn the concpt of Friend Function.
*/
#include <iostream>
using namespace std;
class real;
class integer
{
private:
    int a;

public:
    integer()
    {
        a = 0; //Constructor
    }
    integer(int i)
    {
        a = i;
    }
    void get()
    {
        cout << endl
             << "Enter the Value:" << endl;
        cin >> a;
    }
    void show()
    {
        cout << endl
             << "a="
             << a << endl;
    }
    friend real add(integer i, real j);
};
class real
{
private:
    float b;

public:
    real()
    {
        b = 0.0;
    }
    void get()
    {
        cout << endl
             << "Enter the Value:";
        cin >> b;
    }
    void show()
    {
        cout << endl
             << "b="
             << b << endl;
    }
    friend real add(integer i, real j);
};
int main()
{
    integer x;
    real z, y;
    x.get();
    x.show();
    y.get();
    y.show();
    z = add(x, y);
    z.show();
}
real add(integer i, real j)
{
    real k;
    k.b = i.a + j.b;
    return k;
}