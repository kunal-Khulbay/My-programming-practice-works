/*Author: ALOK KHULBAY.
Date:14-11-2020.
Purpose:To self learn.
Program to implement square root with the help of function overloading.
*/
#include <iostream>
#include <math.h>
#include <iomanip>
int squareroot(int x)
{
    float q;
    q = sqrt(x);
    return q;
}
double squareroot(float x)
{
    float q;
    q = sqrt(x);
    return q;
}
double squareroot(double x)
{
    double q;
    q = sqrt(x);
    return q;
}
int main()
{
    int a, d;
    float b, e;
    double c, f;
    std::cout << "\n Enter the integer number:";
    std::cin >> a;
    d = squareroot(a);
    std::cout << "\n Square Root of " << a << " is: " << d << std::endl;
    std::cout << "\n Enter the float number:";
    std::cin >> b;
    e = squareroot(b);
    std::cout << "\n Square Root of " << b << " is: " << std::setprecision(2) << e << std::endl;
    std::cout << "\n Enter the double number:";
    std::cin >> c;
    f = squareroot(c);
    std::cout << "\n Square Root of " << c << " is: " << std::setprecision(3) << f << std::endl;
    return 0;
}