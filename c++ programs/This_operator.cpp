/*Author: ALOK KHULBAY.
Date:01-11-2020.
Purpose:To self learn.
Program to implement "this" operator
*/
#include <iostream>
#include <string.h>
class abc
{
    char nm[20];
    float fees;

public:
    abc(char *s, float f)
    {
        strcpy(nm, "   ");
        strcpy(nm, s);
        fees = f;
    }
    void display()
    {
        std::cout << this->nm << std::endl;
        std::cout << this->fees << std::endl;
    }
};
int main()
{
    abc m1("Aman", 1200.20), m2("PAL", 1300.30);
    m1.display();
    m2.display();
    return 0;
}
