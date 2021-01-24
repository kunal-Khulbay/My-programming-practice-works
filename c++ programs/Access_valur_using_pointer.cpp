/*Author Alok Khulbay.
Date:-20/10/2020
Purpose:To self learn.
Program to access the value by using pointer.
*/
#include <iostream>
int main()
{
    char ab;
    int r;
    float p, q;
    ab = 'M';
    r = 22;
    p = 0.243;
    q = 5.7;
    std::cout << ab << " is stored at address: " << &ab << std::endl;
    std::cout << r << " is stored at address: " << &r << std::endl;
    std::cout << p << " is stored at address: " << &p << std::endl;
    std::cout << q << " is stored at address: " << &q << std::endl;
    return 0;
}
