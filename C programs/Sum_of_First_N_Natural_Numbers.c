/*Author:Alok Khulbay
Date:18/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int Sum_of_First_N_Natural_Numbers(int n)
{
    int sum = 0;
    sum = ((n * n) + n) / 2;
    return sum;
}
int main()
{
    int n;
    printf("Enter the Number till which you want the sum :");
    scanf("%d", &n);
    int sum = Sum_of_First_N_Natural_Numbers(n);
    printf("The sum of Natural numbers till %d is:%d\n", n, sum);
    return 0;
}