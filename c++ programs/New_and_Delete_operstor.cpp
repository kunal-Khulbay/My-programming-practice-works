/*Author:Alok Khulbay
Date:30/10/2020
Purpose:To self learn.
Program to implement new and delete operator.
*/
#include <iostream>
class abc
{
private:
    int roll_no;
    float fees;

public:
    void read(int r, float f)
    {
        roll_no = r;
        fees = f;
    }
    void display()
    {
        std::cout << "Roll No is" << roll_no;
        std::cout << "\nFees Paid is" << fees << std::endl;
    }
};
int main()
{
    class abc *p;
    p = new abc;
    p->read(20, 1200.20);
    p->display();
    return 0;
}