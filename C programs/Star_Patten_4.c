/*Author:-Alok Khulbay.
Date:-20/08/2020.
Purpose:To complete the C Programming Playlist
*****
****
***
**
*
*/
#include <stdio.h>
void Star_Patten_4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter a Number:");
    scanf("%d", &n);
    Star_Patten_4(n);
    return 0;
}