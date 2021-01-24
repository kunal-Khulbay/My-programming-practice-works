/* Author:Alok Khulbay.
Date:25/10/2020.
Purpose:To self learn.
Program to Concatenate two strings.
*/
#include <iostream>
void combine(char *, char *);
int main()
{
    char *str1, *str2;
    std::cout << "Enter the First String:";
    std::cin >> *str1;
    fflush(stdin);
    std::cout << "Enter the Second String:";
    std::cin >> *str2;
    fflush(stdin);
    combine(str1, str2);
    std::cout << str1;
    return 0;
}
void combine(char *str3, char *str4)
{
    while (*str3 != 0)
    {
        str3++;
    }
    while (*str4 != '\0')
    {
        *str3++ = *str4++;
    }
    *str3 = '\0';
}