/*Author:Alok Khulbay.
Date:27/10/2020.
Purpose:To self learn.
Program to illustrate the concept of Array of Pointer to String.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
int main()
{
    static char *a[10], x[10][10];
    int n = 0, i, j;
    for (i = 0; i < 2; i++)
    {
        a[i] = x[i];
    }
    std::cout << "Please Enter the lines of text At the End press ^z";
    while (gets(a[n]) != 0)
    {
        n++;
    }
    std::cout << "Printing of text line character by character \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < strlen(a[i]); j++)
        {
            std::cout << *(a[i] + j) << std::endl;
        }
        std::cout << "\n";
    }
    std::cout << "Printing of text line line by line \n";
    for (i = 0; i < n; i++)
    {
        std::cout << *(a + i) << std::endl;
    }
}
