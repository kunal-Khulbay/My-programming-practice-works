#include <stdio.h>
int main()
{
    int a[10], i, n;
    printf("Enter the number of elements you want to add in array:");
    scanf("%d", &n);
    printf("Enter the elements of the array are:");
    for (i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Array in reverse order:\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}