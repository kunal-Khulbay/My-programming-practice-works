/*Author:Alok Khulbay
Date:12/11/2020
Purpose:To self learn.
Program to add two matrices by using pointer.
*/
#include <iostream>
int main()
{
    system("cls");
    int a[10][10], b[10][10], c[10][10], n;
    int *pt1;
    std::cout << "Enter the order of Matrix: ";
    std::cin >> n;
    std::cout << std::endl
              << "Enter the Elements of Matrix A: " << std::endl;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            std::cin >> a[i][j];
        }
    }
    std::cout << "Enter the Elements of Matrix B: " << std::endl;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            std::cin >> b[i][j];
        }
    }
    std::cout << "Matrix A is:";
    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j <= n - 1; j++)
        {
            std::cout << '\t' << a[i][j] << " ";
        }
    }
    std::cout << std::endl
              << "Matrix B is:";
    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j <= n - 1; j++)
        {
            std::cout << '\t' << b[i][j] << " ";
        }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    std::cout << std::endl
              << "Sum of two matrices is: ";
    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << std::endl;
        for (int j = 0; j <= n - 1; j++)
        {
            pt1 = &c[i][j];
            std::cout << '\t' << *pt1 << " ";
        }
    }
    std::cout << std::endl;
    // std::cout << std::endl
    //           << "Sum of two matrices is: ";
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     std::cout << std::endl;
    //     for (int j = 0; j <= n - 1; j++)
    //     {
    //         std::cout << '\t' << *pt1 << " ";
    //     }
    //      pt1 = pt1 + 1;
    // }
    // std::cout << std::endl;
    return 0;
}