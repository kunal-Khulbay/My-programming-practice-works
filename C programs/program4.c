/* Author:ALOK KHULBAY.
   Date:10/03/2020.
   Prposse:c toutrial learning.
 Program to distribute the rewards to the students.
 */
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the choice:\n");
    printf("Type 1 if you are passesd in Science\n");
    printf("Type 2 if you are passed in Maths\n");
    printf("type 3 if you are passed in both Maths and Science\n");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Conratulations\n");
        printf("You are passed in science\n");
        printf("You won ₹ 45\n");
    }
    else if (a == 2)
    {
        printf("Conratulations\n");
        printf("You are passed in Maths\n");
        printf("You won ₹ 90\n");
    }
    else if (a == 3)
    {
        printf("Conratulations and Best of luck\n");
        printf("You are passed in both Maths and Science\n");
        printf("Yo won ₹ 120\n");
    }
    else
    {
        printf("Invalid Sekection\n");
    }
    printf("Thanks for Using\n");
}
