/*Author: ALOK KHULBAY.
Date:18-11-2020.
Purpose:To self learn.
Program to explain the relationship of inheritance and virtul function.
*/
#include <iostream>
class parent
{
public:
    virtual void show()
    {
        std::cout << "\n Parent Class";
    }
};
class child1 : public parent
{
public:
    void show()
    {
        std::cout << "\nChild 1 Class";
    }
};
class child2 : public parent
{
public:
    void show()
    {
        std::cout << "\nChild 2 Class\n";
    }
};
int main()
{
    child1 c1;
    child2 c2;
    parent *p;
    p = &c1;
    p->show();
    p = &c2;
    p->show();
    return 0;
}