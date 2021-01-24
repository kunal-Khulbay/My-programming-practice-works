/*Author:Alok Khulbay
Date:11/11/2020
Purpose:To self learn.
Program to find biggest number among three numbers using pointers with functons.
*/
#include <iostream>
int Big(int, int, int);
int (*pt)(int, int, int);
int main()
{
    int x, y, z, B;
    pt = &Big;
    std::cout << "Enter three Numbers" << std::endl;
    std::cin >> x >> y >> z;
    B = (*pt)(x, y, z);
    std::cout << "The Biggest number is: " << B << std::endl;
}
int Big(int a, int b, int c)
{
    int s;
    s = a;

    if (b > s)
    {
        s = b;
    }
    if (c > s)
    {
        s = c;
    }
    return s;
}