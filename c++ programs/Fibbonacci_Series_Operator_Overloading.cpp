/*Author: ALOK KHULBAY.
Date:13-09-2020.
Purpose:To self learn.
Program to print the Fibbonacci series by using prefix increment unary oprator.
*/
#include <iostream>
using namespace std;
class fibbo
{
private:
    unsigned int i, j, k;

public:
    fibbo()
    {
        i = 0;
        j = 1;
        k = i + j;
        cout << i << "\n"
             << j << endl;
    }
    int display()
    {
        cout
            << k << endl;
        return (k);
    }
    void operator++()
    {
        i = j;
        j = k;
        k = i + j;
    }
    ~fibbo()
    {
        cout << "Destructor Invoked" << endl;
    }
};
int main()
{
    int n, i = 0;
    cout << "Enter the value of N:";
    cin >> n;
    fibbo m;
    for (i = 1; i < n - 1; i++)
    {
        m.display();
        ++m;
    }
    return 0;
}