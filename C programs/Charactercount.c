/*Author:Alok Khulbay.
Date:05-06-2020.
Purpose: TO self learn.
Program to count the occurences of each word in a string*/
#include <stdio.h>
#include <string.h>
int main()
{
    char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count = 0, value[100];
    char sentence[100];
    int v[52], a = 0, b;
    printf("\nEnter the sentence:");
    gets(sentence);
    for (int i = 0; i < 52; i++)
    {
        v[i] = 0;
    }

    for (int i = 0; i < strlen(sentence); i++)
    {
        for (a = 0, b = 26; a < 26, b < 52; a++, b++)
        {
            if (sentence[i] == alphabet[a])
            {
                // printf("a is %d\n", a);
                v[a] = v[a] + 1;
                break;
            }
            else if (sentence[i] == alphabet[b])
            {
                // printf("b is %d\n", b);
                v[b] = v[b] + 1;
                break;
            }
        }
    }
    for (int i = 0; i < 52; i++)
    {
        if (v[i] != 0)
        {
            printf("%c occurred %d times.\n", alphabet[i], v[i]);
        }
    }

    return 0;
}
