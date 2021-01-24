/*Author: ALOK KHULBAY.
DAte:31-08-2020.
Purpose:To self learn.
Program to  increment the number to show the working of Static Function.
*/
#include <iostream>
using namespace std;
class abc
{
private:
    static int c;

public:
    abc();
    static void write();
};
int abc::c = 0;
abc::abc()
{
    c++;
}
void abc::write()
{
    cout << "Final value of c is :"
         << c << "\n";
}
int main()
{
    cout << "\n Before instantiation of the object\n";
    abc::write();
    abc m1, m2, m3, m4, m5;
    cout << "\n After instantiation of the object\n";
    abc::write();
    return 0;
}
