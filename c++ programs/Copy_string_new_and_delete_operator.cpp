/*Author:Alok Khulbay
Date:13/11/2020
Purpose:To self learn.
Program to  copy string by new and delete operators.
*/
#include <iostream>
#include <string.h>
class A
{
    char *p;
    int l;

public:
    A(char s[])
    {
        l = strlen(s);
        p = new char(l + 1);
        strcpy(p, s);
    }
    void print()
    {
        std::cout << "String is==>" << p;
        delete p;
    }
};
int main()
{
    char s[20];
    std::cout << "Enter the String:";
    std::cin >> s;
    A a(s);
    a.print();
    return 0;
}