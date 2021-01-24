/*Author: ALOK KHULBAY.
Date:03-09-2020.
Purpose:To self learn.
Program to find the Factroial of a number by using Frienf function
*/
#include <iostream>
using namespace std;
class A
{
    int n;
    friend void fact(A);
    void print();

public:
    A(int p)
    {
        n = p;
    }
};
void A::print()
{
    long f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    cout << "Factroial is==>" << f << endl;
}
void fact(A a)
{
    a.print();
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << endl;
    A a(n);
    fact(a);
    return 0;
}