/* Author:Alok Khulbay.
Date:30/09/2020.
Purpose:To self learn.
Program to implement type conversion fro class to class.
*/
#include <iostream>
using namespace std;
class Student1
{
    int roll, marks;

public:
    Student1(int a, int b)
    {
        roll = a;
        marks = b;
    }
    void print()
    {
        cout << "\nRoll no is " << roll;
        cout << "\nMarks are " << marks;
    }
    int getroll()
    {
        return roll;
    }
    float getmarks()
    {
        return marks;
    }
};
class B
{
    int roll;
    float per;

public:
    B(Student1 s)
    {
        roll = s.getroll();
        per = s.getmarks() / 100;
    }
    void print()
    {
        cout << "\nRoll no is " << roll;
        cout << "\nPercetage is " << per << endl;
    }
};
int main()
{
    Student1 s1(100, 67);
    B s2 = s1;
    system("cls");
    s2.print();
    return 0;
}
