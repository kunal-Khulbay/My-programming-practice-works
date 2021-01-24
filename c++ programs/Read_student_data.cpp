/*Author:Alok Khulbay
Date:22/11/2020
Purpose:To self learn.
Program to read student name and fees paid by using the read() function from the file.
*/
#include <iostream>
#include <fstream>
#include <string.h>
struct student
{
    char name[20];
    float fees;
};
int main()
{
    student s;
    strcpy(s.name, "Raj Kumar");
    s.fees = 1200.32;
    std::ofstream fl;
    fl.open("Admission", std::ios::out | std::ios::binary);
    if (!fl)
    {
        std::cout << "\nCan not open the File";
        return 1;
    }
    fl.write((char *)&s, sizeof(s));
    fl.close();
    std::ifstream fn;
    fn.open("Admission", std::ios ::in | std::ios::binary);
    fn.read((char *)&s, sizeof(s));
    std::cout << "\nName is:" << s.name;
    std::cout << "\nFees paid is:\n" << s.fees;
    fl.close();
    return 0;
}