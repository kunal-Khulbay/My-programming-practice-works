/*Author:Alok khulbay
Date:04/09/2020.
Purpose: Working o practice programs by Mysirg.
*/
#include <stdio.h>
void Number_Patten_1(int n)
{
    int k;
    for (int i = 0; i <= n; i++)
    {
        k = 1;
        for (int j = 0; j < 2 * n ; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                printf("%d", k);
                j < n ? k++ : k--;
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
    Number_Patten_1(n);
    return 0;
}