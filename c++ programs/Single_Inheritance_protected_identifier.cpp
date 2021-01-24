/*Author: ALOK KHULBAY.
Date:11/10-2020.
Purpose:To self learn.
Program to illustrate the single inheritance using the protected Identifier.
*/
#include <iostream>
class base
{
protected:
    int x, y;

public:
    void setxy(int a, int b)
    {
        x = a;
        y = b;
    }
};
class derived : public base //inherit base class publically.
{
    int z;

public:
    void setz(int c)
    {
        z = c;
    }
    void showxyz()
    {
        int s;
        s = x + y + z;
        std::cout << "No's from base class:" << x << " " << y << std::endl;
        std::cout << "No's from derived class:" << z << std::endl;
        std::cout << "Sum of Three No's:" << s << std::endl;
    }
};
int main()
{
    derived d;
    d.setxy(2, 5);
    d.setz(2);
    d.showxyz();
    return 0;
}
