/*Author:Alok Khulbay
Date:19/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int Reverse_a_Number(int n)
{
    int rev = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    int rev = Reverse_a_Number(n);
    printf("The Reverse pf the number %d is %d\n", n, rev);
    return 0;
}