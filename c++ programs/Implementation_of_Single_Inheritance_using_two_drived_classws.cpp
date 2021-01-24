/*Author: ALOK KHULBAY.
Date:02-10-2020.
Purpose:To self learn.
Program to read and write student data by implementing single inheritance using two derrived  classes.
*/
#include <iostream>
#include <iomanip>
using namespace std;
class student
{
private:
    int rn;
    char name[20];

public:
    void readdata();
    void dispdata();
};
class marks : public student
{
private:
    float pm, cm, mm;

public:
    void getdata()
    {
        student::readdata();
        cout << "Enter Physics,Chemistry and  Maths marks:";
        cin >> pm >> cm >> mm;
    }
    void displaydata()
    {
        student::dispdata();
        cout << "Physics Marks are:" << pm << endl;
        cout << "Chemistry Marks are:" << cm << endl;
        cout << "Maths Marks are:" << mm << endl;
    }
};
class result : public marks
{
private:
    float percentage;

public:
    void enterdata();
    void writedata();
};
void student::readdata()
{
    cout << "Enter the Roll No and Name:";
    cin >> rn >> name;
}
void student::dispdata()
{
    cout << "\nRoll No is:" << rn;
    cout << "\nName is:" << name << endl;
}
void result::enterdata()
{
    marks::getdata();
    cout << "Enter the %age :";
    cin >> percentage;
}
void result::writedata()
{
    marks::displaydata();
    cout << "Percentage is :" << percentage << endl;
}
int main()
{
    class result r;
    r.enterdata();
    r.writedata();
    return 0;
}
