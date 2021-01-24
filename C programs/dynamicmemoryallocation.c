/*Author: AOK KHULBAY.
Date:8-05-2020.
Purpose:TO self learn.
Program to learn the use of Dynamic Memory Alocation.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i = 0;
    char *ptr;
    while (i < 3)
    {
        printf("Enter the number of characters are there in your Emoployee id:");
        scanf("%d", &num);
        ptr = (char *)malloc((num + 1) * sizeof(char));
        printf("Enter your Employee id:");
        scanf("%s", ptr);
        printf("\nYour Emolpyee id is:%s\n", ptr);
        free(ptr);
        i++;
    }
    return 0;
}