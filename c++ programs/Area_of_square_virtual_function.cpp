/* Author:Alok Khulbay.
Date:20/11/2020.
Purpose:To self learn.
Program to find the areaof square to illustrate the concept of Virtual function.
*/
#include <iostream>
class area
{
public:
    float n;
    void input()
    {
        std::cout << "Enter the number==>";
        std::cin >> n;
        std::cout << std::endl;
    }
    virtual void result()
    {

        std::cout << "It is he Virtual Function.\n";
    }
};
class square : public area
{
public:
    void result()
    {
        input();
        std::cout << "Area of square is==>" << n * n;
    }
};
int main()
{
    area *p, a;
    p = &a;
    p->result();
    square s;
    p = &s;
    p->result();
    std::cout << "\n";
    return 0;
}