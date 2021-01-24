/*Author: ALOK KHULBAY.
Date:18-11-2020.
Purpose:To self learn.
Program to find the factorial of a number by using the concept of virtual function.
*/
#include <iostream>
class first
{
private:
    int a, b;

public:
    virtual void getdata()
    {
        std::cout << "Inside virtual\n";
    }
    virtual void calculate()
    {
        std::cout << "Inside virtual\n";
    }
};
class second : public first
{
private:
    int n, i;
    long int m;

public:
    void getdata();
    void calculate();
};
void second::getdata()
{
    std::cout << "Enter the Number is:";
    std::cin >> n;
}
void second::calculate()
{
    m = 1;
    for (int i = 1; i <= n; i++)
    {
        m = m * i;
    }
    std::cout << "The factorial of the given number is:" << m << std::endl;
}
int main()
{
    class first *p;
    class second obj;
    p = &obj;
    p->getdata();
    p->calculate();
    return 0;
}