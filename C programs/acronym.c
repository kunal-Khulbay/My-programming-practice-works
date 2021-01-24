/*Author:ALOK KHULBAY;
Date:30-05-2020.
Purpose: To self learn.
Program to print the acroynm(short Form) of the given string;
*/
#include <stdio.h>
#include<conio.h>

char *acroynm(const char *str)
{
    char *p;
    int i = 0, j = 0;
    p[j] = str[i];
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            j++;
            p[j] = str[i + 1];
        }
    }
    p[j + 1] = '\0';
    return p;
}
int main()
{
    char str[100];
    char *ptr;
    printf("Enter your string to print its acronym of the string:");
    gets(str);
    ptr = acroynm(str);
    printf("\nThe Acronym of the given string is:%s\n", ptr);

    return 0;
}