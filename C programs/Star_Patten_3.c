/*Author:-Alok Khulbay.
Date:-20/08/2020.
Purpose:To complete the C Programming Playlist
    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
void Star_Patten_3(int n)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (j >= n - 1 - i && j <= n - 1 + i)
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
    printf("Enter The Number:");
    scanf("%d", &n);
    Star_Patten_3(n);
    return 0;
}