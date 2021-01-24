/*Author: ALOK KHULBAY.
Date:09-09-2020.
Purpose:To self learn.
Program to compute the salary of an Employee by Overloading constructor.
*/
#include <iostream>
#include <string.h>
using namespace std;
class salary
{
private:
    char name[10];
    float bp, da, hra, cca, spray;

public:
    salary();
    salary(char nm[], float b);
    salary(char nm[], float b, float h);
};
salary::salary()
{
    strcpy(name, "       ");
    bp = da = hra = cca = spray = 0.0;
}
salary::salary(char nm[], float b)
{
    strcpy(name, nm);
    bp = b;
    cout << "\n Name is " << name << endl;
    cout << "Basic Pay is " << bp << endl;
}
salary::salary(char nm[], float b, float h)
{
    strcpy(name, nm);
    bp = b;
    hra = h;
    cout << "Name is " << name << endl;
    cout << "Basic Pay is " << bp << endl;
    cout << "House Rent Allowence is " << hra << endl;
}
int main()
{
    salary s1[4] =
        {
            salary(),
            salary("Raj Kumar", 12.273),
            salary("Ram Kumar", 1523.25, 25.32),
        };
    return 0;
}