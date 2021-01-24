/*Author:Alok Khulbay
Date:18/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
void Print_Tables(int n)
{
    for (int i = 1; i < 11; i++)
    {
        printf("%dx%d=%d\n", n, i, n * i);
    }
}
int main()
{
    int n;
    printf("Enter the number whos table you want to print:");
    scanf("%d", &n);
    Print_Tables(n);
    return 0;
}
