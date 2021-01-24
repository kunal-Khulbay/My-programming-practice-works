/*Author: ALOK KHULBAY.
Date:28-10-2020.
Purpose:To self learn.
Program Displays a Relationship of pointers with string.
*/
#include <iostream>
int main()
{
    char st[10];
    void display(char *st);
    std::cout << "Enter any string data:";
    std::cin.get(st, 10, '\n');
    std::cout << "\n The String is:";
    display(st);
    return 0;
}
void display(char *p)
{
    while (*p != '\0')
    {
        std::cout << *p;
        p++;
    }
    std::cout << std::endl;
}