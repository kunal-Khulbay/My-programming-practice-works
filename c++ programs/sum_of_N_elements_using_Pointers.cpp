/*Author Alok Khulbay.
Date:-21/10/2020
Purpose:To self learn.
Program to find sum of N elements of a list by using Pointer.
*/
#include <iostream>
int main()
{
    int a[10], *p1, n, sum = 0;
    std::cout << "Enter the value of N:";
    std::cin >> n;
    std::cout << "Enter the Array element:";
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cout << "Element\t Value \t Address" << std::endl;
    p1 = &a[0];
    for (int i = 0; i < n; i++)
    {
        sum = sum + *p1;
        std::cout << "a[" << i + 1 << "]\t   " << *p1 << "\t" << p1 << std::endl;
        p1++;
    }
    std::cout << "\nSum=" << sum ;
    std::cout << "\tSum is stored at Address:" << &sum << std::endl<< std::endl<< std::endl;
    return 0;
}