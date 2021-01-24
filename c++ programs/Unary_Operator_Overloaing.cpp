/*Author: ALOK KHULBAY.
Date:09-09-2020.
Purpose:To self learn.
Prograrn to overload incrernenting unary operartor.
*/
#include <iostream>
using namespace std;
class student
{
public:
    unsigned int rn;
    student()
    {
        rn = 0; //Constructor declared
    }
    int getdata()
    {
        return rn;
    }
    void operator++()
    {
        rn++;
    }
    ~student()
    {
        cout << "Destructor Invoked";
    }
};
int main()
{
    student r1, r2;
    cout << "\n Value of r1 is:" << r1.getdata();
    cout << "\n Value of r2 is:" << r2.getdata();
    ++r1;
    ++r2;
    ++r2;
    cout << "\n Final Value of r1 is:" << r1.getdata();
    cout << "\n Final Value of r2 is:" << r2.getdata()<<endl;
}
