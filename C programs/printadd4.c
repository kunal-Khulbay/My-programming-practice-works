/* Author: ALOK KHULBAY.
   Date:23-03-2020.
   Purpose: To self learn.
   Program to printt the add and the subtract of integer and float.
*/
#include <stdio.h>
int main()
{
    int a, b;
    float c, d;
    printf("Enter the value of a and b:");
    scanf("%d %d", &a, &b);
    printf("Enter the value of c and d:");
    scanf("%f %f", &c, &d);
    printf("Sum of %d and %d is :%d\n", a, b, a + b);
    printf("Difference of %d and %d is :%d\n", a, b, a - b);
    printf("Sum of %f and %f is :%f\n", c, d, c + d);
    printf("Difference of %f and %f is :%f\n", c, d, c - d);
    return 0;
}
