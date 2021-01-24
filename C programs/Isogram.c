/*Author: Alok Khulbay.
Date:2--6-2020.
Purpose: To self learn.
Program to check that the given string is a Isogram or not.
*/
#include <stdio.h>
#include <string.h>
int isogram(const char *s)
{
    int d = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = i + 1; j <= strlen(s); j++)
        {
            if (s[i] == s[j])
            {
                d = 1;

                break;
            }
        }
        if (d == 1)
        {
            break;
        }
    }
    return d;
}
int main()
{
    char str[100];
    int d;
    printf("Enter the string:");
    gets(str);
    d = isogram(str);
    if (d == 1)
    {
        printf("The string %s is not a Isogram\n", str);
    }
    else
    {
        printf("The string %s is a Isogram\n", str);
    }
    return 0;
}