/*Author: ALOK KHULBAY.
Date:16-11-2020.
Purpose:To self learn.
Program to display the name, address and fees to implement the pure virtual function.
*/
#include <iostream>
class abc
{
public:
    char name[20];
    char address[30];
    virtual void add() = 0;
    virtual void display() = 0;
};
class xyz : public abc
{
private:
    int fees;

public:
    void add()
    {
        std::cout << "\nEnter the Name:";
        std::cin >> name;
        std::cout << "\nEnter the Address:";
        std::cin >> address;
        std::cout << "\nEnter the Fees:";
        std::cin >> fees;
    }
    void display()
    {
        std::cout << "\nName is:" << name;
        std::cout << "\nAddress is:" << address;
        std::cout << "\nFees is:" << fees << std::endl;
        ;
    }
};
int main()
{
    class xyz m1;
    m1.add();
    m1.display();
    return 0;
}