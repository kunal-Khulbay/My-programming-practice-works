/*Author:Alok Khulbay
Date:19/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int main()
{
    char s[10];
    printf("Enter the String:");
    gets(s);
    int len = 0;
    char temp;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("The Length of the String is %d\n", len);
    for (int i = 0; i <= (len - 1) / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("Reversed String is %s\n", s);
    return 0;
}