/*Author: ALOK KHULBAY.
Date:14-11-2020.
Purpose:To self learn.
Program to compute sum by using different types of function by using the concept of function overloading.
*/
#include <iostream>
int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}
int main()
{
    int i, j;
    float k, l;
    int sum(int, int);
    float sum(float, float);
    std::cout << "\nEnter two integer number:";
    std::cin >> i >> j;
    std::cout << "\n Sum of " << i << " & " << j << " is " << sum(i, j)<<std::endl;
    std::cout << "\nEnter two float number:";
    std::cin >> k >> l;
    std::cout << "\n Sum of " << k << " & " << l << " is " << sum(k, l)<<std::endl;
    return 0;
}