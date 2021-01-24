/*Author: ALOK KHULBAY.
Date:08-10-2020.
Purpose:To self learn.
Program to avoid ambiguity in singke inheritance.
*/
#include <iostream>
class A
{
private:
    int i;

public:
    void getdata(int x);
    void display();
};
class B
{
private:
    int j;

public:
    void getdata(int y);
    void display();
};
class C : public A, public B
{
};
void A::getdata(int x)
{
    i = x;
}
void A::display()
{
    std::cout << "'nValue of i is=" << i << std::endl;
}
void B::getdata(int y)
{
    j = y;
}
void B::display()
{
    std::cout << "Value of i is=" << j << std::endl;
}
int main()
{
    class C obj;
    int x, y;
    std::cout << "Enter the value of x:";
    std::cin >> x;
    obj.A::getdata(x);
    std::cout << "Enter the value of y:";
    std::cin >> y;
    obj.B::getdata(y);
    obj.A::display();
    obj.B::display();
    return 0;
}