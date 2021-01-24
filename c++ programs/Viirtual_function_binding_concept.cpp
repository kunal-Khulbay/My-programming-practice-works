/*Author: ALOK KHULBAY.
Date:16-11-2020.
Purpose:To self learn.
Program to describe the declaration of virtual function, which shows a late binding or run time binding concept.
*/
#include <iostream>
class A
{
public:
    int x, y;
    void display()
    {
        std::cout << "This is base class\n";
    }
    virtual void sum()
    {
        std::cout << "Base class A\n";
    }
};
class B : public A
{
private:
    int d;

public:
    void display()
    {
        std::cout << "This is derived class B.\n";
        std::cout << "\n Enter the value of cx & y\n";
        std::cin >> x >> y;
    }
    void sum()
    {
        display();
        d = x + y;
        std::cout << "The sum of " << x << " & " << y << " is " << d << std::endl;
    }
};
int main()
{
    class A *p;
    class B obj;
    p = &obj;
    p->display(); // Run Time Binding.
    p->sum();     // Compile Time binding.
    return 0;
}