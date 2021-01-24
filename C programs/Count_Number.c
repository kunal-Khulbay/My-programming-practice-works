/*Author:Alok Khulbay
Date:26/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int Count_Digits(int n)
{
    int count = 0;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        return count;
    }
}
int main()
{
    int n;
    printf("Emter the Number:");
    scanf("%d", &n);
    int p = Count_Digits(n);
    printf("The Number of digits in the Number %d are %d\n", n, p);
    return 0;
}
