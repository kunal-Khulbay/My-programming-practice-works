/*Author:Alok Khulbay
Date:09/10/2020
Purpose:To self learn.
Program to find biggest number among two numbers using pointers with functons.
*/
#include <iostream>
int *Big(int &, int &);
int main()
{
    int x, y, *c;
    std::cout << "Enter two Numbers" << std::endl;
    std::cin >> x >> y;
    c = Big(x, y);
    std::cout << "The Biggest number is: " << *c << std::endl;
}
int *Big(int &a, int &b)
{
    if (a > b)
    {
        return (&a);
    }
    else
    {
        return (&b);
    }
}