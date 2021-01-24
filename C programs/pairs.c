/*Author:Alok Khulbay.
Date:7-06-2020.
Purpose:To self learn.
Program to check that how many pairs are there.
*/
#include <stdio.h>
int pair_count(const int *p, int n)
{
    int d = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (p[i] == p[j])
            {
                d++;
            }
        }
    }
    return d;
}
int main()
{
    int n, c;
    printf("Enter the number of elements you wanty to add in the arrzy:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    c = pair_count(a, n);
    if (c > 0)
    {
        printf("There are %d pairs in the given array\n", c);
    }
    else
    {
        printf("There are no pairs\n");
    }
    return 0;
}