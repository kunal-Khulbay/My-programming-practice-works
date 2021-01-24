/* Author : ALOK KHULABAY.
Date: 11-04-2020.
Purpose : To self learn.
Program to find the Median of two arrays by Merrging them.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void print(int *a, int n)
{
    printf("elements of the arry are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
void bubble_sort(int a[], int n)
{
    int round, i, temp;
    for (round = 1; round <= n; round++)
    {
        for (i = 0; i <= (n - 1) - round; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[20], b[20], c[40], i, n1, n2;
    printf("Enter the number of elements you want to add in first array:");
    scanf("%d", &n1);
    printf("Elements are:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    print(a, n1);
    printf("Enter the number of elements you want to add in second array:");
    scanf("%d", &n2);

    printf("Elements of the second array are:\n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    print(b, n2);
    for (i = 0; i < n1 + n2; i++)
    {
        if (i < n1)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - n1];
        }
    }
    print(c, n1 + n2);
    bubble_sort(c, n1 + n2);
    printf("Sorted array is:\n");
    print(c, n1 + n2);
    int sum = n1 + n2;
    if (sum % 2 == 0)
    {
        int m;
        m = sum / 2;
        printf("m is %f", m);
        printf("Median of the array is: %.2f ", (float)(c[m] + c[m - 1]) / 2);
    }
    else
    {
        printf("Median of the array is:%d\n", c[sum / 2]);
    }
    system("\npause");
    return 0;
}