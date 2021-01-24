/*Author: ALOK KHULBAY.
Date:12-10-2020.
Purpose:To self learn.
Program to display the processing of the grade using the concept of inheritance.
*/
#include <iostream>
class general
{
private:
    char name[20];
    int roll_no;
    char course[10];

public:
    void getdata();
    void showdata();
};
class marks : public general
{
private:
    int phy, comp, math;

public:
    void getdata();
    void showdata();
};
class grade : public general
{
private:
    int total;
    char grade[2];

public:
    void getdata();
    void showdata();
};
void general::getdata()
{
    std::cout << "Enter the Name of student:";
    std::cin >> name;
    std::cout << "Enter the Roll-No of student:";
    std::cin >> roll_no;
    std::cout << "Enter the Class of student:";
    std::cin >> course;
}
void general::showdata()
{
    std::cout << name << " " << roll_no << " " << course;
}
void marks::getdata()
{
    general::getdata();
    std::cout << "\nEnter the marks of Physics:";
    std::cin >> phy;
    std::cout << "\nEnter the marks of Computer:";
    std::cin >> comp;
    std::cout << "\nEnter the marks of Maths:";
    std::cin >> math;
}
void marks::showdata()
{
    general::showdata();
    std::
            cout
        << " " << phy << " " << comp << " " << math;
}
void grade::getdata()
{
    general::getdata();
    std::cout << "Enter the Total Marks:-\n";
    std::cin >> total;
    std::cout << "\nEnter the Grade:";
    std::cin >> grade;
}
void grade::showdata()
{
    general::showdata();
    std::cout << " " << total << " " << grade;
}
int main()
{
    marks ob1;
    grade ob2;
    std::cout << "Enter the following info for student with marks\n";
    ob1.getdata();
    std::cout << "Enter the info with grade & total marks\n";
    ob2.getdata();
    std::cout << "Name Roll-No,Class Physics Computer Maths\n";
    ob1.showdata();
    std::cout << "Name Roll-No,Class Total-Marks Grade\n";
    ob2.showdata();
    return 0;
}