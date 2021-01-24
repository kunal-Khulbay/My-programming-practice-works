/*Author:Alok khulbay
Date:03/09/2020.
Purpose: Working o practice programs by Mysirg.
**********
****  ****
***    ***
**      **
*        *
*/
#include <stdio.h>
int Star_Patten_2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= 2 * n - 1; j++)
        {
            if (j < n - i || j >= n + i)
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
    Star_Patten_2(n);
    return 1;
}