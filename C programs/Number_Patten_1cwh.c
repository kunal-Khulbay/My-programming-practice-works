/*Author:-Alok Khulbay
Date:-21/08/2020/
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
void Number_Patten_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= i)
            {
                printf("%d", i);
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
    Number_Patten_1(n);
    return 0;
}