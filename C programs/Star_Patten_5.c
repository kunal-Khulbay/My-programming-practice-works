/*Author:-Alok Khulbay
Date:-21/08/2020/
Purpose:To complete the C Programming Playlist
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>
void Star_Patten_5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
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
    Star_Patten_5(n);
    return 0;
}