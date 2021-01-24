/*Author:Alok Khulbay
Date:21/11/2020
Purpose:To self learn.
Program to display the ASCII code characters by using the get() function in files.
*/
#include <fstream>
#include <iostream>
#include <conio.h>
int main()
{
    std::ofstream fl;
    fl.open("Raj.txt", std::ios::app);
    if (!fl)
    {
        std::cout << "\nFile cannot be opened";
        return 1;
    }
    char ch;
    int line = 0;
    for (int i = 0; i < 256; i++)
    {
        fl.put((char)i);
    }
    fl.close();
    std::ifstream fn;
    fl.open("Raj.txt", std::ios::in);
    fl.seekp(0);
    for (int i = 0; i < 256; i++)
    {
        if (i != 26)
        {
            fn.get();
            std::cout << " " << i << " = ";
            std::cout.put((char)(i));
        }
        if (!(i % 6))
        {
            std::cout << std::endl;
            line++;
        }
        if (line > 22)
        {
            getch();
            line = 0;
        }
    }
    return 0;
}