/* Author: ALOK KHULBAY.
  Date: 15-04-2020.
  PurposeP To self learn.
  Progrm to print star pattens in reverse and unreversed order.
  */
#include <stdio.h>
void starpatten(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversestarpatten(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = rows; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int choice, rows;
    printf("Press1 1 to print the star patten\n");
    printf("Press1 2 to print the reverse star patten\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("How many rows you want to print:");
        scanf("%d", &rows);
        starpatten(rows);
        break;
    case 2:
        printf("How many rows you want to print:");
        scanf("%d", &rows);
        reversestarpatten(rows);
        break;

    default:
        printf("Invalid chioce \nThanks for using");
        break;
    }
    return 0;
}