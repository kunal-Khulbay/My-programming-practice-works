/*Author: ALOK KHULBAY.
Date:27-09-2020.
Purpose:To self learn.
Program to print Information of tallest student with Overloading of Relational and Assignment operator.
*/
#include <iostream>
#include <string.h>
using namespace std;
class height
{
    char name[20];
    int roll;
    float feet;

public:
    void input()
    {
        cout << "Enter name==>";
        cin >> name;
        cout << "Enter roll number & height==>";
        cin >> roll >> feet;
    }
    void output()
    {
        cout << "Name is :" << name << "\n Roll number is:" << roll;
        cout << "\n Height is " << feet << "feet" << endl;
    }
    int operator>(height z)
    {
        if (feet > z.feet)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void operator=(height z)
    {
        strcpy(name, z.name);
        roll = z.roll;
        feet = z.feet;
    }
};
int main()
{
    height h[10], temp;
    int i, n;
    cout << "Enter number of students==>";
    cin >> n;
    cout << "Enter the infomation==>\n";
    for (i = 0; i < n; i++)
    {
        cout << "Student" << i + 1 << ".\n";
        h[i].input();
    }
    temp = h[0];
    for (i = 0; i < n; i++)
    {
        if (h[i] > temp)
        {
            temp = h[i];
        }
    }
    cout << "The information of tallest student is ==>\n";
    temp.output();
    return 0;
}
