/*Author: ALOK KHULBAY.
Date:16-10-2020.
Purpose:To self learn.
Program to maintain student database by hierarical inheitance.
*/
#include <iostream>
#include <iomanip>
#include <conio.h>
class A
{
    char name[20], roll;

public:
    void input()
    {
        std::cout << "Enter the Name & Roll-No. :";
        std::cin >> name >> roll;
        getchar();
    }
    void print()
    {
        std::cout << std::setw(20) << name << "  " << roll << std::endl;
    }
};
class B : A
{
    int maths, phy, chy;

public:
    int total;
    void input()
    {
        A::input();
        std::cout << "Enter marks in Maths:";
        std::cin >> maths;
        std::cout << "Enter marks in Chemistry:";
        std::cin >> chy;
        std::cout << "Enter marks in Physics:";
        std::cin >> phy;
        total = maths + phy + chy;
        std::cout << std::endl;
    }
    void print()
    {
        A::print();
        std::cout << std::setw(8) << maths << std::setw(8) << chy << std::setw(8) << phy << std::setw(8) << total << std::endl;
    }
};
class C : A
{
    int c, java, sql;

public:
    int total;
    void input()
    {
        A::input();
        std::cout << "Enter marks in C:";
        std::cin >> c;
        std::cout << "Enter marks in Java:";
        std::cin >> java;
        std::cout << "Enter marks in SQL:";
        std::cin >> sql;
        total = c + java + sql;
    }
    void print()
    {
        A::print();
        std::cout << std::setw(8) << c << std::setw(8) << java << std::setw(8) << sql << std::setw(8) << total << std::endl;
    }
};
int main()
{
    int com, med;
    B b[10];
    C c[10];
    std::cout << "Enter the number of computer students:";
    std::cin >> com;
    std::cout << "Enter the information of computer students\n";
    for (int i = 0; i < com; i++)
    {
        c[i].input();
    }
    std::cout << "Enter the number of medical students:";
    std::cin >> med;
    std::cout << "Enter the infrmation of medical students\n";
    for (int i = 0; i < com; i++)
    {
        b[i].input();
    }
    std::cout << "The Database of computer students are:\n";
    std::cout << std::setw(20) << "Name"
              << "  "
              << "Roll-No." << std::setw(8) << "C" << std::setw(8) << "Java" << std::setw(8) << "SQL" << std::setw(8) << "Total\n";
    for (int i = 0; i < com; i++)
    {
        c[i].print();
        std::cout << std::endl;
    }
    std::cout << "Press any key to display database of Medical Students...";
    getch();
    std::cout << "The Database of Medical Students is:\n";
    std::cout << std::setw(20) << "Name"
              << " "
              << "Roll-No." << std::setw(8) << "Maths" << std::setw(8) << std::setw(8) << "che"
              << std::setw(8) << "phy" << std::setw(8) << "Total\n";
    for (int i = 0; i < med; i++)
    {
        b[i].print();
    }
    return 0;
}