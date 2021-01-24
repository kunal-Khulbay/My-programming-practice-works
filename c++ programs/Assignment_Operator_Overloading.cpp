/*Author: ALOK KHULBAY.
Date:17-09-2020.
Purpose:To self learn.
Program to illustrate the concept of Assignment Operator Overloading
*/
#include <iostream>
using namespace std;
class A
{
public:
    A &operator=(char)
    {
        cout << "A& A:: operator=(char)" << endl;
        return *this;
    }
    virtual A &operator=(const A &)
    {
        cout << "All A::operator=(const A&)" << endl;
        return *this;
    }
};
class B : public A
{
public:
    B &operator=(char)
    {
        cout << "B& B::operator=(char)" << endl;
        return *this;
    }
    A &operator=(const A &)
    {
        cout << "B& B::operator=(const A&)" << endl;
        return *this;
    }
};
class C : public B
{
};
int main()
{
    B b1, b2;
    A *ap1 = &b1;
    A *ap2 = &b2;
    *ap1 = 'z';
    *ap2 = b2;
    C c1;
    return 0;
}