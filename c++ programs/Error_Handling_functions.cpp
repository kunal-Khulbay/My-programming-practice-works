/*Author:Alok Khulbay
Date:22/11/2020
Purpose:To self learn.
Program to show diffrent error message by uding Error handling in functions in files.
*/
#include <iostream>
#include <fstream>
int main()
{
    std::ifstream infile;
    infile.open("Raj");
    while (!infile.eof())
    {
        std::cout << "\nEnd of thr file Encounted\n";
        exit(0);
    }
    while (!infile.fail())
    {
        std::cout << "Could not open a Flle";
        continue;
    }
    if (infile.bad())
    {
        std::cerr << "File cannot be opened";
        exit(1);
    }
    if (infile.good())
    {
        std::cout << "File is without error";
    }
    return 0;
}