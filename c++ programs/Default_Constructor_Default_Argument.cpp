/*Author: ALOK KHULBAY.
Date:05-09-2020.
Purpose:To self learn.
Program to read rollno and fees to illustrate the concept of Default constructor with Default argument.
*/
#include <iostream>
using namespace std;
class abc
{
private:
    int rn;
    float fees;

public:
    abc(int a = 20, float b = 1200.25);
    void write(void)
    {
        cout << rn << endl;
        cout << fees << endl;
    }
};
abc::abc(int a, float b)
{
    rn = a;
    fees = b;
}
int main()
{
    class abc m1(32), m2(54, 320.23);
    m1.write();
    m2.write();
    return 0;
};