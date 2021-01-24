/*Author:ALOK KHULBAY.
Date:22-05-2020.
Purpose:To self learn.
Program to find the Eulidian distace and then the area of circle using Function Pionters.
*/
#include <stdio.h>
#include <math.h>
#define PI 3.14
float eulidianddistance(int x1, int y1, int x2, int y2)
{
    float distance;
    distance = (pow((x2 - x1), 2)) + (pow((y2 - y1), 2));
    return sqrt(distance);
}
float area(int x1, int y1, int x2, int y2, float (*ptr)(int x1, int y1, int x2, int y2))
{
    printf("The distance is:%.2f\n", ptr(x1, y1, x2, y2));
    float area = PI * (pow(ptr(x1, y1, x2, y2), 2));
    return area;
}
int main()
{
    float a;
    int x1, x2, y1, y2;
    float (*ptr)(int, int, int, int);
    printf("Enter the value of x1:");
    scanf("%d", &x1);
    printf("Enter the value of y2:");
    scanf("%d", &y1);
    printf("Enter the value of x2:");
    scanf("%d", &x2);
    printf("Enter the value of y2:");
    scanf("%d", &y2);
    ptr = eulidianddistance;
    a = area(x1, y1, x2, y2, ptr);
    printf("Area of the circle of radius %.2f is:%.2f\n", ptr(x1, y1, x2, y2), a);
    return 0;
}