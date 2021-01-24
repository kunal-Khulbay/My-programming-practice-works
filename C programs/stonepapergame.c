/*Author:ALOK KHULBAY.
Date:7-04-2020.
Purpose: To self learn.
Program to play the game.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int generaterandomnumber()
{
    srand(time(NULL));
    return rand() % 2;
}
int main()
{
    char name[20], item[10];
    int i = 0, p, point = 0, pointc = 0;
    printf("Welcome To the Game\n");
    printf("Enter your name:");
    scanf(" %s", name);
    printf("Select the the three options\n1.rock.\n2.paper.\n3.scissor\n");
    while (i < 3)
    {
        printf("Player's Turn\n");
        printf("Enter your choice from the above options:");
        scanf(" %s", item);
        if ((strcmp(item, "rock") == 0) || (strcmp(item, "paper") == 0) || (strcmp(item, "scissor") == 0))
        {
            printf("Computer's Turn\n");
            p = generaterandomnumber();
            if (p == 0)
            {
                printf("Computer has selected rock\n");
            }
            else if (p == 1)
            {
                printf("Computer has selected paper\n");
            }
            else
            {
                printf("Compter has selected scissor\n");
            }
            if (((strcmp(item, "rock") == 0) && p == 0) || ((strcmp(item, "paper") == 0) && p == 1) || ((strcmp(item, "scissor") == 0) && p == 2))
            {
                printf("The %d th round is tie\n", i + 1);
            }
            else
            {
                if ((strcmp(item, "rock") == 0) && p == 2)
                {
                    printf("%s has won the %dth round\n", name, i + 1);
                    point++;
                }
                else if ((strcmp(item, "paper") == 0) && p == 0)
                {
                    printf("%s has won the %dth round\n", name, i + 1);
                    point++;
                }

                else if ((strcmp(item, "scissor") == 0) && p == 1)
                {
                    printf("%s has won the %dth round\n\n\n", name, i + 1);
                    point++;
                }
                else
                {
                    printf("Computer has won the %dth round\n\n\n", i + 1);
                    pointc++;
                }
            }
        }
        i++;
    }
    if (pointc > point)
    {
        printf("Computer has won the game\n");
    }
    else if (pointc == point)
    {
        printf("The Game is tie");
    }

    else
    {
        printf("%s has won the game\n", name);
        printf("Congratulations\nThanks forPlaying\nPlay Again\n");
    }
    getch();
    return 0;
}