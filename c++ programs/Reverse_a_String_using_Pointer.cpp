/*Author: ALOK KHULBAY.
Date:05-11-2020.
Purpose:To self learn.
Program to Reverse the string using pointer.
*/
#include <iostream>
#include <iomanip>
#include <string.h>
int main()
{
    char a[20];
    void f(char[20]);
    void (*p)(char[20]);
    std::cout << "Enter the String:";
    std::cin >> a;
    p = &f;
    (*p)(a);
    return 0;
}
void f(char *s)
{
    int i, n;
    char t;
    n = strlen(s);
    for (i = 0; i < n / 2; i++)
    {
        t = *(s + i);
        *(s + i) = *(s + n - i - 1);
        *(s + n - i - 1) = t;
    }
    std::cout << "Reversed string is: \t\t";
    for (i = 0; *(s + i) != 0; i++)
    {
        std::cout << *(s + i);
    }
    std::cout << std::endl;
}