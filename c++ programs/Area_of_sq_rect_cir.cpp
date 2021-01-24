/* Author:Alok Khulbay.
Date:20/11/2020.
Purpose:To self learn.
program to find area of square or rectangle or circle by using function overloading.
*/
#include <iostream>
void area (int);
void area(float);
void area(float, float);
int main()
{
    int choice;
back:
    std::cout << "Press 1 for area of Square.\n";
    std::cout << "Press 2 for area of Rectangle.\n";
    std::cout << "Press 3 for area of Circle.\n";
    std::cout << "Enter your choice.:";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        int s;
        std::cout << "Enter side==>";
        std::cin >> s;
        area(s);
        break;
    case 2:
        float l, b;
        std::cout << "Enter length & breath==>";
        std::cin >> l >> b;
        area(l, b);
        break;
    case 3:
        float r;
        std::cout << "Enter radius==>";
        std::cin >> r;
        area(r);
        break;
    default:
        std::cout << "Enter proper choice:";
        goto back;
    }
    return 0;
}
void area(int s)
{
    std::cout << "Area of square is==>" << s * s << std::endl;
}
void area(float l, float b)
{
    std::cout << "Area of rectange is==>" << l * b << std::endl;
}
void area(float r)
{
    std::cout << "Area of circle is==>" << r * r * 22 / 7 << std::endl;
}
