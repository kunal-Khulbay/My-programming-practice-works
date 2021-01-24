/*Author: ALOK KHULBAY.
Date:19-11-2020.
Purpose:To self learn.
Program to illustrate the concept of virtual function.
*/
#include <iostream>
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
        std::cout << "You are in virtual function";
        return 0;
    }
};
class square : public area
{
    float result()
    {
        z = n * n;
        return z;
    }
};
class cube : public area
{
    float result()
    {
        z=n*n*n;
        return z;
    }
};
int main()
{
    float as,ac;
    area *p;
    square s;
    cube c;
    s.getdata();
    p=&s;
    as=p->result();
    std::cout<<"\nArea of Square is:"<<as<<std::endl;
    c.getdata();
    p=&c;
    ac=p->result();
    std::cout<<"Area of Cube is:"<<ac<<std::endl;
    return 0;
}