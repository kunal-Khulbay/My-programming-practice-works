/*Author:Alok Khulbay
Date:30/10/2020
Purpose:To self learn.
Program to show relationship of pointers to objects.
*/
#include <iostream>
class abc
{
public:
    int a;
    abc(int n)
    {
        a = n;
    }
};
int main()
{
    class abc m1(20);
    class abc *p;
    p = &m1;
    int *q, *r;
    q = &m1.a;
    r = &p->a;
    std::cout << "a=" << m1.a;
    std::cout << "\nq=" << *q;
    std::cout << "\nr=" << *r<<std::endl;
}