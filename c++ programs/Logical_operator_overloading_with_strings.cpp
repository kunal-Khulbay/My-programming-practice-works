/* Author:Alok Khulbay.
Date:01/10/2020.
Purpose:To self learn.
Program to implement the logical operator overloading with strings.
*/
#include <iostream>
#include <string.h>
using namespace std;
class A
{
public:
    char s[15];
    void input()
    {
        cin >> s;
    }
    void print()
    {
        cout << s << endl;
    }
    A operator&&(A a)
    {
        A a1;
        strcpy(a1.s, s);
        strcat(a1.s, a.s);
        return a1;
    }
};
int main()
{
    A a, b, c;
    cout << "Enter the First string==>";
    a.input();
    cout << "Enter the Second string==>";
    b.input();
    c = a && b;
    c.print();
    return 0;
}
