/*Author: ALOK KHULBAY.
Date:07-10-2020.
Purpose:To self learn.
Program to process student data to describe level of Inheritance.
*/
#include <iostream>
class Student
{
private:
    int rn;
    char name[20], address[20];

public:
    void readdata()
    {
        std::cout << "Enter the Roll No ,Name and Address:";
        std::cin >> rn >> name >> address;
    }
    void writedata()
    {
        std::cout << "Roll No is:" << rn << std::endl;
        std::cout << "NAME is:" << name << std::endl;
        std::cout << "Address is:" << address << std::endl;
    }
};
class body : public Student
{
private:
    int wt;
    float ht;

public:
    void getdata()
    {
        Student::readdata();
        std::cout << "\nEnter the height and weight of student:";
        std::cin >> ht >> wt;
    }
    void dispdata()
    {
        Student::writedata();
        std::cout << "\nHeight is:" << ht;
        std::cout << "\nWeight is:" << wt;
    }
};
class dmc : public body
{
private:
    int p;
    char r[5];

public:
    void get()
    {
        body::getdata();
        std::cout << "Enter the percentage and result of the atudent:";
        std::cin >> p >> r;
    }
    void display()
    {
        body::dispdata();
        std::cout << "\nPercentage is:" << p;
        std::cout << "\nResult is:" << r << std::endl;
    }
};
int main()
{
    class dmc d;
    std::cout << "Enter the student information" << std::endl;
    d.get();
    std::cout << "\nInformation is";
    d.display();
    return 0;
}