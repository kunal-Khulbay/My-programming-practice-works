/*Author: ALOK KHULBAY.
Date:06-11-2020.
Purpose:To self learn.
Program to sort the N numbers in ascending order by using Pointer.
*/
#include <iostream>
#include <math.h>
int main()
{
    int a[10], n, *p;
    std::cout << "Enter the Number of Elements:";
    std::cin >> n;
    std::cout << "Enter the elements:";
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    std::cout << "Sorted list is:";
    int t;
    for (int pass = 1; pass < n; pass++)
    {
        t = 0;
        p = &a[0];
        for (int i = 0; i < n - pass; i++, p++)
        {
            if (*p > *(p + 1))
            {
                t = *p;
                *p = *(p + 1);
                *(p + 1) = t;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}