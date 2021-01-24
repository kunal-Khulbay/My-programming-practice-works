/* Author:Alok Khulbay.
Date:19/11/2020.
Purpose:To self learn.
A menu driven program using Virtual function.
*/
#include <iostream>
#include <math.h>
class area
{
protected:
    int z, n;

public:
    void getdata()
    {
        std::cout << "\nEnter the NO-:";
        std::cin >> n;
    }
    virtual float result()
    {
        std::cout << "Please Enter your choice between 1 to 4:\t";
        std::cin.get();
        return 0;
    }
};
class two : public area
{
    float result()
    {
        z = n * n;
        return z;
    }
};
class three : public area
{
    float result()
    {
        z = n * n * n;
        return z;
    }
};
class four : public area
{
    float result()
    {
        z = n * n * n * n;
        return z;
    }
};
class five : public area
{
    float result()
    {
        z = n * n * n * n * n;
        return z;
    }
};
int main()
{
    float res;
    int ch;
    area *p;
    two t2;
    three t3;
    four f4;
    five f5;
    std::cout << "1. X**2." << std::endl
              << "2. X**3." << std::endl
              << "3. X**4." << std::endl
              << "4. X**5." << std::endl;
    std::cout << "Enter the choice:" << std::endl;
    std::cin >> ch;
    switch (ch)
    {
    case 1:
        p = &t2;
        break;
    case 2:
        p = &t3;
        break;
    case 3:
        p = &f4;
        break;
    case 4:
        p = &f5;
        break;

    default:
        std::cout << "Invalid Choice.";
    }
    if (ch > 4)
    {
        res = p->area::result();
    }
    else
    {
        p->getdata();
        res = p->result();
        std::cout << "Result =" << res << std::endl;
    }
    return 0;
}