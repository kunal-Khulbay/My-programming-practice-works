/* Author:Alok Khulbay.
Date:24/10/2020.
Purpose:To self learn.
Program to copy a string into another string array
*/
#include <iostream>
int main()
{
    void copy( char *,  const char *);
    const char *s1 = "HELLO";
    char s2[10];
    copy(s2, s1);
    std::cout << s2;
}
void copy( char *d,  const char *s)
{
    while (*s)
    {
        *d++ = *s++;
    }
    *d = 10;
}