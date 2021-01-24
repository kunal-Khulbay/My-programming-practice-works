/*Author: ALOK KHULBAY.
Date:09-09-2020.
Purpose:To self learn.
Program to read and display student data by using the concept of single inhetitance 
*/
#include <iostream>
#include <iomanip>
using namespace std;
class student
{
private:
    int rn;
    char name[20], add[20];

public:
    void readdata();
    void dispdata();
};
class marks : private student
{
private:
    float pm, cm, mm;

public:
    void readdata();
    void dispdata();
};
void student::readdata()
{
    cout << "Enter the Roll No. :" << endl;
    cin >> rn;
    cout << "Enter the Name :" << endl;
    getchar();
    gets(name);
    cout << "Enter the Address :" << endl;
    getchar();
    gets(add);
}
void student::dispdata()
{
    cout << "Roll No. is :" << rn << endl;
    cout << "Name is :" << name << endl;
    cout << "Address is :" << add << endl;
}
void marks::readdata()
{
    student::readdata();
    cout << "Enter the Physics marks:";
    cin >> pm;
    cout << "Enter the chemistry marks:";
    cin >> cm;
    cout << "Enter the Maths  marks:";
    cin >> mm;
}
void marks::dispdata()
{
    student::dispdata();
    cout << "Physics Marks are :" << pm << endl;
    cout << "Chemistry Marks are :" << cm << endl;
    cout << "Maths Marks are :" << mm << endl;
}
int main()
{
    marks r;
    cout << "Enter the Followig Student Information.\n";
    r.readdata();
    r.dispdata();
    return 0;
}