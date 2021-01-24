/*Author:Alok Khulbay
Date:31/10/2020
Purpose:To self learn.
Progarm to show the behaviour of delete operator.
*/
#include <iostream>
#include <new>
struct A
{
    virtual ~A()
    {
        std::cout << "~A()" << std::endl;
    }
    void operator delete(void *p)
    {
        std::cout << "A::operator delete" << std::endl;
        delete (p);
    }
};
struct B : A
{
    void operator delete(void *p)
    {
        std::cout << "B::operator delete" << std::endl;
        delete (p);
    }
};

int main()
{
    A *ap = new B;
    delete ap;
    return 0;
}
