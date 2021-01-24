/*Author:Alok Khulbay.
Date:26/10/2020.
Purpose:To self learn.
Program to Reverse a string using pointer with string without the use of string handling inbuilt(Library function) function.
*/
#include <iostream>
#include <string.h>
void reverse(const char *);
int main()
{
    const char *st = "Very Good";
    std::cout <<"String is:"<< st;
    std::cout << "\n";
    std::cout << "Reverse of the string:\n";
    reverse(st);
    return 0;
}
void reverse(const char *st1)
{
    int I = strlen(st1);
    for (int i = I - 1; i >= 0; --i)
    {
        std::cout << *(st1 + i) << " " << std::endl;
    }
}