/*Author: ALOK KHULBAY.
Date:- 03-11-2020.
Purpose:To self learn.
program to implement pointer to pointer.
*/
#include <iostream>
int main(void)
{
    int a, *p1, **p2;
    a = 20;
    p1 = &a;
    p2 = &p1;
    std::cout << "The value of A is stored at address:" << p1 << std::endl;
    std::cout << "The value of p1 is stored at address:" << p2 << std::endl;
    std::cout << "The value of A is using pointer to pointer is:" << **p2 << std::endl;
    return 0;
}