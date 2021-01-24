/*Author: ALOK KHULBAY.
Date: 10/10/2020.
Purpose:To self learn.
Prgram to implement inheritance using private indentfier.
*/
#include <iostream>
class base
{
    int n;

public:
    void seta(int n)
    {
        this->n = n;
    }
    void showa()
    {
        std::cout << n * n << std::endl;
    }
};
class derived : private base
{
    int b;

public:
    void setb(int b)
    {
        this->b = b;
    }
    void showb()
    {
        std::cout << b * b << std::endl;
    }
};
int main()
{
    derived d;
    base b;
    b.seta(4);
    d.setb(5);
    b.showa();
    d.showb();
    return 0;
}