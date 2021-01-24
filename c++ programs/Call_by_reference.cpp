/*Author Alok Khulbay.
Date:- 23/10/2020
Purpose:To self learn.
Program to explain the concept of swapping by using the Call by Reference.
*/
// #include <iostream>
// void exchange(int *, int *);
// int main()
// {
//     int x, y, *p1, *p2;
//     std::cout << "\n Enter the value of x:";
//     std::cin >> x;
//     std::cout << "\n Enter the value of y:";
//     std::cin >> y;
//     p1 = &x;
//     p2 = &y;
//     std::cout << "Before Exchange x =" << x << " and y =" << y << std::endl;
//     exchange(p1, p2);
//     std::cout << "Before Exchange x =" << x << " and y =" << y << std::endl;
//     return 0;
// }
// void exchange(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
// }
#include <iostream>
void exchange(int *, int *);
int main()
{
    int x, y, *p1, *p2;
    std::cout << "\n Enter the value of x:";
    std::cin >> x;
    std::cout << "\n Enter the value of y:";
    std::cin >> y;
    std::cout << "Before Exchange x =" << x << " and y =" << y << std::endl;
    exchange(&x,&y);
    std::cout << "Before Exchange x =" << x << " and y =" << y << std::endl;
    return 0;
}
void exchange(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}