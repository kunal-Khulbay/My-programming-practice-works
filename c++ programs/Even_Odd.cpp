/*Author: ALOK KHULBAY.
Date:27-08-2020.
Purpose:To self learn.
Program to check the number is even or odd using inline function
*/
#include <iostream>
using namespace std;
inline int Even_Odd(int n)
{
    return !(n % 2);
}
int main()
{
    int a;
    cout << "Enter any Number:" << endl;
    cin >> a;
    if (Even_Odd(a))
    {
        cout << a << " is Even" << endl;
    }
    else
    {
        cout << a << " is Odd" << endl;
    }
    return 0;
}
