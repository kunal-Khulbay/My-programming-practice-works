/*Author: ALOK KHULBAY.
DAte:30-05-2020.
Purpose:To self learn.
Program to learn Nesting of Classes.
*/
#include <iostream>
using namespace std;
class student
{
private:
    char name[20];
    int rollno;

public:
    void readdata();
    void showdata();
    class date
    {
    private:
        int day, month, year;

    public:
        void setdate(int d, int m, int y);
        void showdate();
    };
};
void student::readdata()
{
    cout << "Enter the Name of student: ";
    cin >> name;
    cout << "Enter the Roll Number of the student:";
    cin >> rollno;
}
void student::date::setdate(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
void student::showdata()
{
    cout << "The name of student:" << name << endl;
    cout << "The Roll Number of student:" << rollno << endl;
}
void student::date::showdate()
{
    cout << "Day:"
         << "\t" << day << endl;
    cout << "Month:"
         << "\t" << month << endl;
    cout << "Year:"
         << "\t" << year << endl;
}
int main()

{
    student obj1;
    student::date obj2;
    obj1.readdata();
    obj1.showdata();
    obj2.setdate(5, 6, 4);
    obj2.showdate();
    return 0;
}