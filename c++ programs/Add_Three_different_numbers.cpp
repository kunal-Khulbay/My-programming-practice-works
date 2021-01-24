/*Author: ALOK KHULBAY.
Date:17-11-2020.
Purpose:To self learn.
Program to add three different numbers to illustrate the concept of virtual binding.
*/
#include <iostream>
class abc
{
public:
    int a;
};
class xyz : virtual public abc //xyz inherits base as virtual.
{
public:
    int b;
};
class lmn : virtual public abc
{
public:
    int c;
};
class pqr : public xyz, public lmn
{
public:
    int t;
};
int main()
{
    class pqr m1;
    m1.a = 10;
    m1.b = 20;
    m1.c = 30;
    m1.t = m1.a + m1.b + m1.c;
    std::cout << m1.a << std::endl;
    std::cout << m1.b << std::endl;
    std::cout << m1.c << std::endl;
    std::cout << "Sum is=" << m1.t << std::endl;
    return 0;
}