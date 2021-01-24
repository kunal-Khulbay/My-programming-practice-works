/*Author: ALOK KHULBAY.
Date:09-10-2020.
Purpose:To self learn.
Program to enter and write student to explain multiple inheritance.
*/
#include <iostream>
class student
{
private:
    char sex, name[20];
    int rn;

public:
    void getdata()
    {
        std::cout << "\nEnter Roll No and Name of the student:";
        std::cin >> rn >> name;
        std::cout << "Enter Sex of student (M/F/O):";
        std::cin >> sex;
    }
    void display()
    {
        std::cout << "\nRoll No is:" << rn;
        std::cout << "\nName is:" << name;
        std::cout << "\nSex is:" << sex << std::endl;
    }
};
class academic
{
private:
    char course[20], semester[10];
    int rank;

public:
    void getdata()
    {
        std::cout << "\nEnter Course Name (B.E/B.C.A/Bsc.I.T):";
        std::cin >> course;
        std::cout << "\nEnter Semester (1st/2nd):";
        std::cin >> semester;
        std::cout << "\nEnter Rank of student:";
        std::cin >> rank;
    }
    void display()
    {
        std::cout << "\nCourse adopted is:" << course;
        std::cout << "\nSemester entered is:" << semester;
        std::cout << "\nRank is:" << rank << std::endl;
    }
};
class fees : public student, public academic
{
private:
    int f;

public:
    void readdata();
    void writedata();
};
void fees::readdata()
{
    student::getdata();
    academic::getdata();
    std::cout << "\nEnter fees paid by student:";
    std::cin >> f;
}
void fees::writedata()
{
    student::display();
    academic::display();
    std::cout << "\n Fees paid is:" << f << std::endl;
}
int main()
{
    class fees r;
    r.readdata();
    r.writedata();
    return 0;
}
