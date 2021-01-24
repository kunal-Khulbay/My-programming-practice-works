/*Author: ALOK KHULBAY.
Date:06-09-2020.
Purpose:To self learn.
Program to copy value to illustarate the concept of Copy Constructor.
*/
#include <iostream>
using namespace std;
class abc
{
private:
    int a;
    float b;

public:
    abc(int x, float y)
    {
        a = x;
        b = y;
    }
    abc(abc &m)
    {
        a = m.a;
        b = m.b;
    }
    void write()
    {
        cout << a << endl;
        cout << b << endl;
    }
};
int main()
{
    abc m1(20, 4.2);
    abc m2(m1);
    abc m3 = m1;
    m1.write();
    m2.write();
    m3.write();
    return 0;
}