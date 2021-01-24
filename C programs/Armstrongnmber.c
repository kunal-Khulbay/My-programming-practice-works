/* Author:Alok Khulbay.
 Date:15-04-2020.
 Purpose: To self learn.
 Program to print that the given numvber is Armstrong number or not.
 */
#include <stdio.h>
int main()
{
    int arm_num, copyarm, sum = 0, rem;
    printf("Enter the number:");
    scanf("%d", &arm_num);
    copyarm = arm_num;
    if (arm_num == 1 || arm_num == 2 || arm_num == 3 || arm_num == 4 || arm_num == 5 || arm_num == 6 || arm_num == 7 || arm_num == 8 || arm_num == 9)
    {
        printf("%d is an Armstrong Number\n", arm_num);
    }
    else
    {
        while (arm_num != 0)
        {
            rem = arm_num % 10;
            sum = sum + (rem * rem * rem);
            arm_num = arm_num / 10;
        }

        if (sum == copyarm)
        {
            printf("%d is an Armstrong Number\n", copyarm);
        }
        else
        {
            printf("%d is not an Armstrong Number\n", copyarm);
        }
    }
    return 0;
}