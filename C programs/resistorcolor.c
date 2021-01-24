/* Author: ALOK KHULBAY.
Date : 26-04-2020.
Purpose: to self learn.
Program to print the resistor value according to color.
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char color[50];
    printf("Enter the name of the color:");
    scanf("%s", &color);

    if (strcmp(color, "black") == 0)
    {
        printf("Value is 0\n");
    }
    else if (strcmp(color, "brown") == 0)
    {
        printf("Value is 1\n");
    }
    else if (strcmp(color, "red") == 0)
    {
        printf("Value is 2\n");
    }
    else if (strcmp(color, "orange") == 0)
    {
        printf("Value is 3\n");
    }
    else if (strcmp(color, "yellow") == 0)
    {
        printf("Value  is 4\n");
    }
    else if (strcmp(color, "green") == 0)
    {
        printf("Value is 5\n");
    }
    else if (strcmp(color, "blue") == 0)
    {
        printf("Value is 6\n");
    }
    else if (strcmp(color, "violet") == 0)
    {
        printf("Value is 7\n");
    }
    else if (strcmp(color, "grey") == 0)
    {
        printf("Value is 8\n");
    }
    else if (strcmp(color, "white") == 0)
    {
        printf("Value is 9\n");
    }

    return 0;
    getch();
}