/*Author:ALOK KHULBAY.
Date:14-05-2020.
Purpose:To sself Learn.
Peogram to print thet the number is palindioe or not.
*/
#include <stdio.h>
int Ispalindomine(int num)
{
    int rev = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    return rev;
}
int main()
{
    int num, rev;
    printf("Enter the number to check the number is  palindomine or not:");
    scanf("%d", &num);
    rev = Ispalindomine(num);
    printf("The reverse of the %d is:%d\n", num, rev);
    if (rev == num)
    {
        printf("%d is a palindomine\n", rev);
    }
    else
    {
        printf("%d is not an paaindomine number\n", num);
    }

    return 0;
}