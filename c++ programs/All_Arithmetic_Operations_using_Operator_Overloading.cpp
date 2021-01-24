/*Author: ALOK KHULBAY.
Date:22-09-2020.
Purpose:To self learn.
Program to do all the Arithmetic Operations using the concept of Opeartor Overloading
*/
#include <iostream>
#include <conio.h>
using namespace std;
class menu
{
public:
    float number;
    menu()
    {
        number = 0;
    }
    void getvalue();
    menu operator+(menu b);
    menu operator-(menu b);
    menu operator*(menu b);
    menu operator/(menu b);
};
menu menu::operator+(menu b)
{
    menu temp;
    temp.number = number + b.number;
    return (temp);
}
menu menu::operator*(menu b)
{
    menu temp;
    temp.number = number * b.number;
    return (temp);
}
menu menu::operator/(menu b)
{
    menu temp;
    temp.number = number / b.number;
    return (temp);
}
menu menu::operator-(menu b)
{
    menu temp;
    temp.number = number - b.number;
    return (temp);
}
void menu::getvalue()
{
    cout << "Enter the Value:";
    cin >> number;
}
int main()
{
    menu a, b, c;
    char ch;
    a.getvalue();
    b.getvalue();
    cout << "ARITHMETIC OPERATIONS";
    cout << "Menu()\n";
    cout << "a->ADDITION\n";
    cout << "s->SUBTRACTION\n";
    cout << "m->MULTIPLICATION\n";
    cout << "d->DIVISION\n";
    cout << "q->QUIT\n";
    cout << "Option,Please ?\n";
    while ((ch = getch()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            c = a + b;
            cout << "Addition of Two Numbers are:";
            cout << c.number << endl;
            break;
        case 's':
            c = a - b;
            cout << "Subtraction of Two Numbers are:";
            cout << c.number << endl;
            break;
        case 'm':
            c = a * b;
            cout << "Multiplication of Two Numbers are:";
            cout << c.number << endl;
            break;
        case 'd':
            c = a / b;
            cout << "Division of Two Numbers are:";
            cout << c.number << endl;
            break;

        default:
            cout << "Invalid Choice!! Please select the Right Character" << endl;
        }
    }
}