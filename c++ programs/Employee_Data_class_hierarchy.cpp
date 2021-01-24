/*Author: ALOK KHULBAY.
Date:06-10-2020.
Purpose:To self learn.
Program to display employee data to represent different class levels (class hierarchy).
*/
#include <iostream>
using namespace std;
class employee
{
private:
    char name[20];
    int id_no;

public:
    void readdata()
    {
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Identification Number:";
        cin >> id_no;
    }
    void displaydata()
    {
        cout << "Name is:" << name << endl;
        cout << "Id_Number is:" << id_no << endl;
    }
};
class clerk : public employee
{
private:
    int overtime;

public:
    void getdata()
    {
        employee::readdata();
        cout << "Enter the Number of overtime hrs worked:";
        cin >> overtime;
        cout << endl;
    }
    void display()
    {
        employee::displaydata();
        cout << "Overtime Worked:" << overtime << endl;
    }
};
class peon : public employee
{
private:
    int job;

public:
    void getdata();
    void displaydata();
};
void peon::getdata()
{
    employee::readdata();
    cout << "\nEnter the Number of hours when job completed:";
    cin >> job;
}
void peon::displaydata()
{
    employee::displaydata();
    cout << "Job completed in:" << job << " hrs" << endl;
}
class manager : public employee
{
private:
    char title;
    int salary;

public:
    void enterdata();
    void writedata();
};
void manager::enterdata()
{
    employee::readdata();
    cout << "Enter the title of the job and the salary:";
    cin >> title >> salary;
}
void manager ::writedata()
{
    employee::displaydata();
    cout << "Title of the Job is:" << title << endl;
    cout << "Salary is:" << salary << endl;
}
int main()
{
    manager m1, m2;
    clerk c1;
    peon p1;
    cout << "Enter the data of First Manager\n";
    m1.enterdata();
    cout << "Enter the data of Second Manager\n";
    m2.enterdata();
    cout << "Enter the data for Clerk\n";
    c1.getdata();
    cout << "Enter the data for Peon\n";
    p1.getdata();
    cout << "Data for 1st Mamnager is\n";
    m1.writedata();
    cout << "Data for 2nd Mamnager is\n";
    m2.writedata();
    cout << "Data for Clerk is\n";
    c1.display();
    cout << "Data for Peon is\n";
    p1.displaydata();
    cout << "End of the Program";
    return 0;
}