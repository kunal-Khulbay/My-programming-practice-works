/*Author: ALOK KHULBAY.
Date:08-09-2020.
Purpose:To self learn.
Program to read and display Roll No. to illustrate the concept of Dynmaic Constructor.
*/
#include <iostream>
using namespace std;
class abc
{
    int rn;
    float fees;

public:
    abc(int a, float b)
    {
        rn = a;
        fees = b;
    }
    abc(abc &m)//Copy Constructor.
    {
        rn = m.rn;
        fees = m.fees;
        cout << "\n Copy constructor at Work";
    }
};
int main()
{
    float x, y;
    cout << "Enter the Roll No of Student";
    cin >> x;
    cout << "\n Enter the fees of Student";
    cin >> y;
    abc m1(x, y);
    abc m2(m1);
    cout << "\n Roll no and fees is:" << x << " and " << y << endl;
    return 0;
}