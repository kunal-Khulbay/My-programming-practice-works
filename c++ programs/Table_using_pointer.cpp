/*Author:Alok Khulbay
Date:12/11/2020
Purpose:To self learn.
Program to print a table using pointer,
*/
#include <iostream>
int main()
{
    int n, i = 1, p;
    int *pt;
    std::cout << "Enter a Number whose table is to be generated." << std::endl;
    std::cin >> n;
    std::cout << "The Required Table is given below:" << std::endl;
    pt = &i;
    do
    {
        p = *pt * n;
        std::cout << n << " * " << *pt << " = " << p << std::endl;
        (*pt)++;
    } while (*pt <= 10);
    return 0;
}