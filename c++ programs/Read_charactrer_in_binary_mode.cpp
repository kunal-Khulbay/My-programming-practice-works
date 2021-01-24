/*Author:Alok Khulbay
Date:21/11/2020
Purpose:To self learn.
Program to read a character by using get() function opened in the Binary Mode.
*/

#include <fstream>
#include <iostream>
int main()
{
    char ch;
    std::ifstream fl;
    fl.open("Raj.txt", std::ios::in | std::ios::binary);

    if (!fl)
    {
        std::cout << "\nFile cannot be opened";
        return 1;
    }
    while (fl)
    {
        fl.get(ch);
        std::cout << ch;
    }
    fl.close();
    return 0;
}