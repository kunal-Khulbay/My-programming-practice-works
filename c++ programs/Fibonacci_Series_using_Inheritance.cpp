/*Author: ALOK KHULBAY.
Date:15-10-2020.
Purpose:To self learn.
Program to print Fibonacci Series using Constructor under Inheritance.
*/
#include <iostream>
class A
{
protected:
    int a;

public:
    A()
    {
        a = 0;
    }
};
class B
{
protected:
    int b;

public:
    B()
    {
        b = 1;
    }
};
class C : public A, public B
{
    int c;

public:
    C() : A(), B()
    {
        c = a + b;
    }
    void print()
    {
        std::cout << c << " ";
        a = b;
        b = c;
        c = a + b;
    }
};
int main()
{
    int n;
    std::cout << "Enter the Number of terms:";
    std::cin >> n;
    C c;
    std::cout << "The series is: 0 1 ";
    for (int i = 0; i <= n - 2; i++)
    {
        c.print();
    }
    std::cout << std::endl;
    return 0;
}