/* Author: ALOK KHULBAY.
Date: 18/03/2020.
Purpose: to self learn.
Pogram to reeerse the elements of array.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i,n;
    printf("Enter the number of elements you want to insert:");
    scanf("%d",&n);
    printf("Ente the elements of the array:\n");
    for ( i = 1; i <=n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is :\n");
    for ( i = 1; i <=n; i++)
    {
            printf("%d\n",a[i]);
    }
    printf("The reverse of the array is :\n");
    for ( i = n; i >=1; i--)
    {
        printf("%d\n",a[i]);
    }
    return 0;
    getch(); 
}