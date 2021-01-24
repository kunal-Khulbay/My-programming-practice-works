/*Author Alok Khulbay.
Date:-22/10/2020
Purpose:To self learn.
Program to swap two values to illustrate the concept of Call by Value (argument passing without pointer).
*/
#include <iostream>
void swap(int, int);
int main()
{
    int a, b;
    std::cout << "Enter the value of a:";
    std::cin >> a;
    std::cout << "Enter the value of b:";
    std::cin >> b;
    std::cout << "Value of a=" << a << " and\n Value of b =" << b << " before swap\n\n" << std::endl;
    swap(a, b);
    std::cout << "Value of a=" << a << " and\n Value of b =" << b << " After swap\n\n" << std::endl;
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}