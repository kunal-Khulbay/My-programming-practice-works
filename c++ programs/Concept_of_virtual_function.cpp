/*Author: ALOK KHULBAY.
Date:15-11-2020.
Purpose:To self learn.
Program to illutrate the concept of virtual function.
*/
#include <iostream>
class base
{
public:
    void display()
    {
        std::cout << "\n Display base";
    }
    virtual void show()
    {
        std::cout << "\nShow base";
    }
};
class drived : public base
{
public:
    void display()
    {
        std::cout << "\nDisplay drived";
    }
    void show()
    {
        std::cout << "\nShow drived";
    }
};
int main()
{
    base b;
    drived d;
    base *ptr;
    std::cout << "\nptr points to base\n";
    ptr = &b;
    ptr->display();
    ptr->show();
    std::cout << "\nptr points to drived\n";
    ptr = &d;
    ptr->display();
    ptr->show();
    return 0;
}
