/*Author:Alok Khulbay
Date:19/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int Print_Prime_in_Given_Range(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1, n2;
    printf("Enter First Number:");
    scanf("%d", &n1);
    printf("Enter Second Number:");
    scanf("%d", &n2);
    printf("The Prime Numbers between %d and %d are:", n1, n2);
    for (int i = n1; i <= n2; i++)
    {
        if (Print_Prime_in_Given_Range(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}