/* Author:Alok khulbay
   Date:17/03/2020
   Purpose:Leetcode website problem for self practice
  */
#include <stdio.h>
int main()
{
    int n, i, a[10];
    printf("Enter the number of elenebts you want to insert:");
    scanf("%d", &n);
    printf("Enter the terms of the array:\n");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array elements are:\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
    bubble_sort(a, n);
    printf("The sorted arry is :\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a[i]);
    }
    
    if (a[n - 2] == NULL)
    {
        printf("Third maximum number in the array is :");
        printf("%d", a[n-2]);
    }
    else
    {
        printf(" Maximum number in the array is :");
        printf("%d", a[n]);
    }
    return 0;
}
int bubble_sort(int a[], int n)
{
    int round, i, temp;
    for (round = 1; round <= n; round++)
    {
        for (i = 1; i <= n - round; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }

    return 0;
}
