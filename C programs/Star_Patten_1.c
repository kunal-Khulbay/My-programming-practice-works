/*Author:Alok khulbay
Date:29/08/2020.
Purpose: Working o practice programs by Mysirg.
   *
  * *
 * * *
* * * *
*/
#include <stdio.h>
int Star_Patten_1(int n)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        int k = 1;
        for (int j = 0; j < 2 * n; j++)
        {
            if (j >= n - 1 - i && j <= n - 1 + i && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter The Number;");
    scanf("%d", &n);
    Star_Patten_1(n);
    return 0;
}