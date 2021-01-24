/*Author: ALOK KHULBAY.
DAte:14-10-2020.
Purpose:To self learn.
Program to handle student data to handle Multilevel Inheritance.
*/
#include <iostream>
class A
{
    char name[20];

public:
    void input()
    {
        std::cout << "Enter the Name" << std::endl;
        std::cin >> name;
    }
    void print()
    {
        std::cout << "\n\n\n";
        std::cout << "Name is " << name << std::endl;
    }
};
class B : A
{
    int roll;

public:
    void getdata()
    {
        A::input();
        std::cout << "Enter roll number==>";
        std::cin >> roll;
    }
    void putdata()
    {
        A::print();
        std::cout << "Roll number is " << roll << std::endl;
    }
};
class C : private B
{
    int marks;

public:
    void input()
    {
        getdata();
        std::cout << "Enter marks==>";
        std::cin >> marks;
    }
    void print()
    {
        putdata();
        std::cout << "Marks otained are " << marks << std::endl;
    }
};
int main()
{
    C c;
    c.input();
    c.print();
    return 0;
}