/*Author:Alok Khulbay
Date:19/08/2020
Purpose:To complete the C Programming Playlist
*
**
***
****
*****
*/
#include <stdio.h>
void Star_Patten_1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter the Number;");
    scanf("%d", &n);
    Star_Patten_1(n);
    return 0;
}
