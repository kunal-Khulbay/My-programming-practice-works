/*Author: ALOK KHULBAY.
Date:10-11-2020.
Purpose:To self learn.
Program to compute number of boys and girls by using the pointer.
*/
#include <iostream>
int main()
{
    int boys, girls, total, *ptrboys, *ptrgirls, *ptrtotal;
    ptrboys = &boys;
    ptrgirls = &girls;
    ptrtotal = &total;
    std::cout << "Number of Male students:";
    std::cin >> *ptrboys;
    std::cout << "Number of Female students:";
    std::cin >> *ptrgirls;
    std::cout << "Number of students:";
    std::cout << "\n\tBoys:"
              << "\t" << boys;
    std::cout << "\n\tThat is:" << *ptrboys << " students";
    std::cout << "\n\tGirls:"
              << "\t" << boys;
    std::cout << "\n\tThat is:" << *ptrgirls << " students";
    total = boys + girls;
    *ptrtotal = *ptrboys + *ptrgirls;
    std::cout << "\n\nTotal number of students:" << total;
    std::cout << "\n There are\t\t " << *ptrtotal << " students";
    std::cout << "\n\n";
    return 0;
}