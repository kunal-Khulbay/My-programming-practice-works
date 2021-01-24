/*Author: ALOK KHULBAY.
Date:25-09-2020.
Purpose:To self learn.
Program to add two different objects of the coordinate classes by using Opwerator Overloading.
*/
#include <iostream>
using namespace std;
class coord
{
private:
    int x, y;

public:
    coord(int i = 0, int j = 0) : x(i), y(j)
    {
    }
    void get()
    {
        cout << "Enter the Coordinate:" << endl;
        cin >> x >> y;
    }
    void show()
    {
        cout << "\nX= " << x << endl;
        cout << "\nY= " << y << endl;
    }
    coord operator+(coord a)
    {
        coord c;
        c.x = x + a.x;
        c.y = y + a.y;
        return c;
    }
};
int main()
{
    coord ob1(20, 30), ob2(22, 34), ob3;
    ob3 = ob1 + ob2;
    ob3.show();
    return 0;
}