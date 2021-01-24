/*Author:Alok khulbay
Date:14/09/2020
Purpose: Working o practice programs by Mysirg.
*/
#include <stdio.h>
void Alphabet_Patten(int n)
{
    char k;
    for (int i = 0; i <= n; i++)
    {
        k = 'A';
        for (int j = 0; j < 2 * n ; j++)
        {
            if (j >= n + 1 - i && j <= n - 1 + i)
            {
                printf("%c", k);
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
    Alphabet_Patten(n);
    return 0;
}