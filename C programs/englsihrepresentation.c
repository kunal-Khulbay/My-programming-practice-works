/* Author: ALOK KHULBAY.
   Date; 24-03-2020.
   Purpose : T self learn.
Program to print the english representation and he number is odd or even.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d\n%d", &a, &b);
    for (int i = a; i < b + 1; i++)
    {
        switch (i)
        {
        case 1:
            printf("one\n");
            break;
        case 2:
            printf("two\n");
            break;
        case 3:
            printf("three\n");
            break;
        case 4:
            printf("four\n");
            break;
        case 5:
            printf("five\n");
            break;
        case 6:
            printf("six\n");
            break;
        case 7:
            printf("seven\n");
            break;
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;

        default:
            if (i % 2)
            {
                printf("odd\n");
            }
            else
            {
                printf("even\n");
            }

            break;
        }
    }
    return 0;
}
