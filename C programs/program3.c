/* Author:ALOK KHULBAY.
   Date:10/03/2020.
   Prposse:c toutrial learning.
 Program to print the table of the number.
*/
#include <stdio.h>
int main()
{
    int a, i;
    printf("Enter the number whose table you want to print:");
    scanf("%d", &a);
    printf("Table of %d is:\n", a);
    for (i = 1; i <= 10; i++)
    {
        printf("%d*%d=%d\n", a, i, a * i);
    }
}
