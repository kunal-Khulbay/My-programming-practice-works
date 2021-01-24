/*Author: ALOK KHULBAY.
Date:04-11-2020.
Purpose:To self learn.
Program to traverse N array elements with pointer.
*/
#include <iostream>
int main()
{
    int a[10], n, *p;
    std::cout << "Enter the Number of Elements:";
    std::cin >> n;
    p = a;
    for (int i = 0; i < n; i++)
    {
        std::cin >> *(p + i);
    }
    std::cout << "\nEntered elemets are:";
    for (; p < a + n; p++)
    {
        std::cout << "\n"
                  << *p;
    }
    std::cout << "\n";
    return 0;
}