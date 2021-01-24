/*Author: ALOK KHULBAY.
Date:25-09-2020.
Purpose:To self learn.
Program to perform Arithmetic Operations on Complex Numbers by Friend Function i.e. By Operator Overloading
*/
#include <iostream>
using namespace std;
class A
{
    float a, b;

public:
    void input()
    {
        cout << "The number is a + ib.\n";
        cout << "Enter a & b==>";
        cin >> a >> b;
    }
    friend void operator+(A, A);
    friend void operator-(A, A);
    friend void operator*(A, A);
    friend void operator/(A, A);
};
int main()
{
    A a, b;
    cout << "Enter first number.";
    a.input();
    cout << "Enter second number.";
    b.input();
    int choice;
    cout << "Press 1 for Addition.\n";
    cout << "Press 2 for Substraction.\n";
    cout << "Press 3 for Multiplication.\n";
    cout << "Press 4 for Division.\n";
    cout << "Enter the choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        operator+(a, b);
        break;
    case 2:
        operator-(a, b);
        break;
    case 3:
        operator*(a, b);
        break;
    case 4:
        operator/(a, b);
        break;
    default:
        cout << "Incorrect choice.";
    }
    return 0;
}
void operator+(A z, A z1)
{
    cout << "Sum is " << z.a + z1.a << "+ i " << z.b + z1.b << endl;
}
void operator*(A z, A z1)
{
    cout << "Product is " << z.a * z1.a - z.b * z1.b;
    cout << "+ i " << z.a * z1.b + z.b * z1.a << endl;
}
void operator-(A z, A z1)
{
    cout << "Difference is " << z.a - z1.a << "+ i " << z.b - z1.b << endl;
}
void operator/(A z, A z1)
{
    cout << "Division is " << (z.a * z1.a + z.b * z1.b) / (z1.a * z1.a + z1.b * z1.b);
    cout << "+ i " << (z.b * z1.a - z.a * z1.b) / (z1.a * z1.a + z1.b * z1.b) << endl;
}
