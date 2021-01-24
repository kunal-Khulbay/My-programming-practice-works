/*Author:Alok Khulbay
Date:18/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int Isprime(int n)
{
    int res = 1;
    if (n == 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res = 0;
        }
    }
    return res;
}
int main()
{
    int n;
    printf("Enter the number which you want to check thet is prime or not:");
    scanf("%d", &n);
    int m = Isprime(n);
    if (m)
    {
        printf("%d is a Prime Number\n", n);
    }
    else
    {
        printf("%d is not a Prime Number\n", n);
    }
    return 0;
}