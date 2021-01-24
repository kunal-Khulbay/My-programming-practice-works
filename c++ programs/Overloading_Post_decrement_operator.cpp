/*Author: ALOK KHULBAY.
Date:25-09-2020.
Purpose:To self learn.
Program to illustrate the ooerloading of post decrement operator.
*/
#include <iostream>
using namespace std;
class A
{
    int n;

public:
    void input()
    {
        cin >> n;
    }
    void operator--(int)
    {
        n--;
        cout << "\n Operator overloaded function executed.\n";
    }
    void print()
    {
        cout << n << endl;
    }
};
int main()
{
    cout << "Enter the number==>";
    A a;
    a.input();
    cout << "The Number is==>";
    a.print();
    a--;
    cout << "Now this number is==>";
    a.print();
    return 0;
}