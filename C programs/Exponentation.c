/*Author:Alok Khulbay
Date:31/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
long long int Exponentation(int m, int n)
{
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    return val;
}
int main()
{
    int number, power;
    long long int value;
    printf("Enter the Number:");
    scanf("%d", &number);
    printf("\nEnter the Power:");
    scanf("%d", &power);
    value = Exponentation(number, power);
    printf("%d raise to the power %d is %lld\n", number, power, value);
    return 0;
}