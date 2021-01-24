/*  Author: ALOK KHULBAY.
Date: 4-04-2020.
Purpose:To self learn.
Program of a game.
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    char a, q;
    printf("Press y if you want to play the game:");
    scanf(" %c", &a);
    if (a == 'y' || a == 'Y')
    {
        printf("Welcome to the game\n");
        printf("Here is the First Question\t\t For Rs 2000\n");
        printf("Question.1 How many rings are there in Olampic flag?\n");
        printf("A.Two\n");
        printf("B.Four\n");
        printf("C.Three\n");
        printf("D.Five\n");
        printf("Select an option:");
        scanf(" %c", &q);

        if (q == 'd' || q == 'D')
        {
            printf("You won rupees 2000\n");
        }
        else
        {
            printf("Sorry\nYou lose the Game\n");
        }
    }

    else
    {
        printf("Invalid Selection\n Thanks for Playing\n");
    }

    return 0;
}