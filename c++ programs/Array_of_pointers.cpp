/*Author Alok Khulbay.
Date:-29/10/2020
Purpose:To self learn.
Program which illustrate exchange the position of strings stored in array of pointers.
*/
#include <iostream>
#include <string.h>
int main()
{
    const char *city[] = {"MOGA", "BATALA", "PARIS", "DELHI", "ASR"};
    int I = 0;
    I = strlen(city[1]);
    std::cout << "string 2 is:";
    std::cout.write(city[1], I).put('\n');
    std::cout << "string 4 is:";
    std::cout.write(city[3], I).put('\n');
    const char *t;
    t = city[1];
    city[1] = city[3];
    city[3] = t;
    I = strlen(city[1]);
    std::cout << "\nExchanged string 2 is:";
    std::cout.write(city[1], I).put('\n');
    std::cout << "\nString 4 is:";
    std::cout.write(city[3], I).put('\n');
    return 0;
}