/*Author: ALOK KHULBAY.
Date:04-09-2020.
Purpose:To self learn.
Program to find all roots of a quadratic equaions.
*/
#include <iostream>
#include <math.h>
using namespace std;
class Roots
{
public:
    float a, b, c, dis;
    void input()
    {
        cout << "Enter a,b,c:";
    lebel:
        cin >> a;
        if (a == 0)
        {
            cout << "A should not be Zero\n";
            cout << "Enter the values again:" << endl;
            goto lebel;
        }
        cin >> b >> c;
        dis = b * b - 4 * a * c;
    }
} r;
class solve
{
    float r1, r2;

public:
    void print()
    {
        if (r.dis == 0)
        {
            equal();
        }
        else if (r.dis > 0)
        {
            real();
        }
        else
        {
            imaginary();
        }
    }
    void equal()
    {
        cout << "\nRoots are Equal" << endl;
        r1 = (r2 = r.b / (2 * r.a));
        cout << "Roots are: " << r1 << " & " << r2 << endl;
    }
    void real()
    {
        cout << "\nRoots are Real" << endl;
        r1 = (-r.b + sqrt(r.dis)) / (r.a * 2);
        r2 = (-r.b - sqrt(r.dis)) / (r.a * 2);
        cout << "Roots are:" << r1 << "\t&" << r2 << endl;
    }
    void imaginary()
    {
        cout << "\nRoots are Imaginary" << endl;
        r1 = r.b / (r.a * 2);
        r2 = sqrt(-r.dis) / (r.a * 2);
        cout << "Real Root is:" << r1 << endl;
        cout << "Imaginary part is:" << r2 << endl;
    }
} s1;
int main()
{
    r.input();
    s1.print();
    return 0;
}
