/* Author: ALOK KHULBAY.
   Date:16/03/2020.
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    char st[81], s[81];
    int v[80], i, j, k, d[80], p[100];
    printf("Enter the First Number:\n");
    gets(st);
    for (i = 0; i < strlen(st); i++)
    {
        v[i] = st[i] - '0';
    }
    int m = i;
    printf("First array is:\n");
    for (i = 0; i < m; i++)
    {
        printf("%d", v[i]);
    }
    printf("\nEnter the Second Number:\n");
    gets(s);
    for (j = 0; j < strlen(s); j++)
    {
        d[j] = s[j] - '0';
    }
    int a = j;
    printf("Second array is:\n");
    for (i = 0; i < a; i++)
    {
        printf("%d", d[i]);
    }
    k = 0;
    int w = 0;
    for (int i = m - 1, j = a - 1; i >= 0; i--, j--)
    {
        p[k] = v[i] + d[j];
        p[k] = p[k] + w;
        if (p[k] > 9 && i != 0)
        {
            w = p[k];
            p[k] = w % 10;
            // printf("\n%d\n", p[k]); // for tracing value.
            k++;
            w = w / 10;
            p[k] = w;
            // printf("\n%d\n", w); // for tracing value.
        }
        else
        {
            k++;
        }
    }
    int x = k - 1;

    printf("\nSum is: \n");
    for (int i = x; i >= 0; i--)
    {
        printf("%d", p[i]);
    }

    printf("\n");
    return 0;
    getch();
}