/*Author:Alok Khulbay
Date:19/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int Factorial_Itrative(int n)
{
    int val = 1;
    for (int i = n; i > 1; i--)
    {
        val *= i;
    }
    return val;
}
int Factorial_Recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * Factorial_Recursive(n - 1);
}
int main()
{
    int n;
    printf("Enter a number whose Factorial to find:");
    scanf("%d", &n);
    int fact1 = Factorial_Itrative(n);
    int fact2 = Factorial_Recursive(n);
    printf("The Factorial of %d is %d\n", n, fact1);
    printf("The Factorial of %d is %d\n", n, fact2);
    return 0;
}