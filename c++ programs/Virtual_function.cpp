/*Author: ALOK KHULBAY.
Date:15-11-2020.
Purpose:To self learn.
Program to use the virtual function.
*/
#include <iostream>
#include <math.h>
class abc
{
public:
    int a, b;
    void read()
    {
        std::cout << "Enter the integer values:";
        std::cin >> a >> b;
    }
    virtual void display()
    {
        std::cout << "This is base class abcL:" << std::endl;
    }
};
class xyz : public abc
{
private:
    int c;

public:
    void display()
    {
        abc::read();
        c = a + b;
        std::cout << "The sum is =" << c << std::endl;
    }
};
class lmn : public abc
{
private:
    int d;

public:
    void display()
    {
        abc::read();
        d = a * b;
        std::cout << "This Multiplaction is =" << d;
    }
};
int main()
{
    class abc *p;
    class xyz m;
    std::cout << "Base class xyz:" << std::endl;
    p = &m;
    p->display();
    std::cout << "\nBase class lmn:" << std::endl;
    class lmn r;
    p = &r;
    p->display();
}
