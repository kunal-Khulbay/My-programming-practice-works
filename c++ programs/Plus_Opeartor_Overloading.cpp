/*Author: ALOK KHULBAY.
Date:24-09-2020.
Purpose:To self learn.
Program to illustrate the concept of operator overloading using the plus(+) operator with the same function name.
*/
#include <iostream>
using namespace std;
class demo
{
private:
    int m;

public:
    demo();
    demo(int);
    demo operator+(demo);
    void display();
    ;
};
demo::demo()
{
    m = 0;
}
demo::demo(int n)
{
    m = n;
}
demo demo::operator+(demo obj1)
{
    demo t;
    t.m = m + obj1.m;
    return (t);
}
void demo::display()
{
    cout << "m=" << m << endl;
}
int main()
{
    demo obj1(50), obj2(50);
    demo objs;
    objs = obj1 + obj2;
    obj1.display();
    obj2.display();
    objs.display();
    return 0;
}