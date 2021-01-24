/*Author:ALOK KHULBAY>
Date:13-05-2020.
Purpose:To  self learn,
Program to multiply to matrices.
*/
#include <stdio.h>
int main()
{
    int a, b, sum = 0;
    int arr1[2][2], arr2[2][2], arr3[2][2];
    printf("Enter te elements of the first matrix:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Elements of First Matricx are:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the elements of the second matrix:");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("Elements of Second Matricx are:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                sum += arr1[i][j] * arr2[i][j];
            }
            arr3[i][j] = sum;
            sum = 0;
        }
    }
    printf("Multiplation is:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
