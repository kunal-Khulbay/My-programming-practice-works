/*Author:-Alok Khulbay.
Date:-24/08/2020
Purpose:-To complete the C Programming Playlist.
****
*  *
*  *
****
*/
#include <stdio.h>
void Star_Patten_6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || j == n - 1 || i == n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the Number:");
    scanf("%d", &n);
    Star_Patten_6(n);
    return 0;
}