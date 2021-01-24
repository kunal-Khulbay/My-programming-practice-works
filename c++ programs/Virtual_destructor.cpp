/*Author: ALOK KHULBAY.
Date:17-11-2020.
Purpose:To self learn.
Program to illustrate the concept of virtual destructor.
*/
#include <iostream>
#include <new.h>
class abc
{
public:
    abc()
    {
        std::cout << "Base Constructor" << std::endl;
    }
    virtual ~abc()
    {
        std::cout << "Base Destructor" << std::endl;
    }
};
class xyz : public abc
{
    int *a;

public:
    xyz()
    {
        std::cout << "Derived Constructor" << std::endl;
    }
    ~xyz()
    {
        std::cout << "Derived Destructor" << std::endl;
        delete[] a;
    }
};
int main()
{
    abc *p;
    p = new xyz; //creating dynamic derived object.
    delete p;    //destroying dynamic derrived constructor.
    return 0;
}