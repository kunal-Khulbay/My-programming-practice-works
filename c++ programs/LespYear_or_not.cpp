/*Author: ALOK KHULBAY.
DAte:03-09-2020.
Purpose:To self learn.
Program to check weather the year is leap or not.
*/
#include <iostream>
using namespace std;
class A
{
    int y;

public:
    A(int p)
    {
        y = p;
    }
    void print()
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        {
            cout << "Leap Year"<<endl;
        }
        else
        {
            cout << "Not a Leap Year"<<endl;
        }
    }
};
int main()
{
    int y;
    cout << "Enter the Year:";
    cin >> y;
    A a(y);
    a.print();
    return 0;
}