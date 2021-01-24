/*Author: ALOK KHULBAY.
Date:24-09-2020.
Purpose:To self learn.
Program to use pointer with array with different method.
*/
#include <iostream>
const int SIZE = 5;
int main()
{
    float f[SIZE];
    float *p;
    std::cout << "Method 1: Index through array.\n";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << f[i] << "\n";
    }
    p = f;
    std::cout << "Method 2: Use pointer to go through array.\n";
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << *p << "\n";
        p++;
    }
    std::cout << "Method 3: Use pointer also as loop counter.\n";
    for (p = f; p < f + SIZE; p++)
    {
        std::cout << *p << "\n";
    }
}