/* Author:ALOK KHULBAY.
Date:3-02-2020.
Purpose: To self lean.
Program to print the HTML parser.
*/
#include <stdio.h>
#include <string.h>
void parser(char *string)
{
    int in = 0;//Varible to track inside the tag.
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index++;
        }
    }
    string[index] = '\0';
    // Removing the trall9ing sapces from the beginning.
    while (string[0] == ' ')
    {
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i + 1];
        }
    }
    //Removing the spaces from the end.
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string) - 1] = '\0';
    }
}
int main()
{
    char string[] = "<h1>   This is a heading </h1>";
    parser(string);
    printf("The Parsed string is ~~%s~~\n", string);
    return 0;
}
