/*Author: ALOK KHULBAY.
Date:11-09-2020.
Purpose:To self learn.
Program of Assignment Operartor Overloading.
*/
#include <iostream>
using namespace std;
class abc
{
private:
    int a;
    float b;

public:
    abc(int, float);
    void display();
};
abc::abc(int x, float y)
{
    a = x;
    b = y;
}
void abc::display()
{
    cout << "Integer Value is :" << a << "\n";
    cout << "Float Value is :" << b << "\n";
}
int main()
{
    system("cls");
    abc m1(20, 33.3);
    abc m2(10, 5.5);
    cout << "First Object has value\n";
    m1.display();
    cout << "Second Object has value\n";
    m2.display();
    return 0;
}