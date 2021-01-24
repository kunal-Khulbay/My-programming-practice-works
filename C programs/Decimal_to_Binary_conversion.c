/*Author:Alok Khulbay
Date:18/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
void Decimal_to_Binary_conversion(int n)
{
    int arr[10], rem = 0, i = 0;
    if (n == 0)
    {
        printf("%d\n", n);
    }
    while (n)
    {
        rem = n % 2;
        n = n / 2;
        arr[i] = rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter teh Decimal Number:");
    scanf("%d", &n);
    Decimal_to_Binary_conversion(n);
    return 0;
}