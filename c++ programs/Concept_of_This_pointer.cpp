/* Author:Alok Khulbay.
Date:02/11/2020.
Purpose:To self learn.
Program to illustrate the concept of this pointer.
*/
#include <iostream>
class abc
{
private:
    int n;

public:
    void display(void)
    {
        std::cout << "Address of the object" << this << std::endl;
        std::cout << "Data is" << this->n << std::endl;
    }
    void write()
    {
        std::cout << "Data is" << this->n << std::endl;
    }
    abc(int n)
    {
        this->n = n;
    }
    abc &m(abc &m1)
    {
        if (m1.n < n)
        {
            return m1;
        }
        else
        {
            return *this;
        }
    }
};
int main()
{
    class abc t1(20), t2(30);
    t1.display();
    t2.display();
    abc t = t2.m(t1);
    t.write();
    return 0;
}