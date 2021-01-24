/*Author:Alok Khulbay
Date:13/11/2020
Purpose:To self learn.
Program to find Factroial of a number using pointer to function.
*/
#include <iostream>
int fact(int);
int (*pt)(int);
int main()
{
    int n, a;
    pt = &fact;
    std::cout << "\n Enter the Number:";
    std::cin >> n;
    a = (*pt)(n);
    std::cout << "\n The factorial of" << n
              << " is:" << a << std::endl;
    ;
    return 0;
}
int fact(int z)
{
    int i, m;
    m = 1;
    for (int i = 1; i <= z; i++)
    {
        m = m * i;
    }
    return m;
}