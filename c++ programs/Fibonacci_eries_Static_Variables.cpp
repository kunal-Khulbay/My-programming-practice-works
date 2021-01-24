/*Author: ALOK KHULBAY.
DAte:02-09-2020.
Purpose:To self learn.
Program to print fibonacci Series using Static Variables.
*/
#include <iostream>
using namespace std;
class fibonacci
{
private:
    static int a, b;
    int c;

public:
    void print()
    {
        c = a + b;
        cout << c << "\t";
        a = b;
        b = c;
    }
} f;
int fibonacci::b = 1;
int fibonacci::a;
int main()
{
    int n, i;
    cout << "Enter number of terms to be printed:";
    cin >> n;
    if (n == 0)
    {
        cout << "No term to print";
    }
    else
    {
        cout << "The Series is :\t";
        if (n == 1)
        {
            cout << "0";
            cout << endl;
        }
        else if (n > 1)
        {
            cout << "0\t1\t";
            for (i = 1; i <= n - 2; i++)
            {
                f.print();
            }
        }
        cout << endl;
    }
    return 0;
}
