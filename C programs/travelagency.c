/*Author :ALOK KHULBAY.
Date:1-05-2020.
Purpose: To self learn.
Program to print print the details of an travel agency
*/
#include <stdio.h>
#include <conio.h>
struct travelagency
{
    char name[20];
    int driving_licience_number, route, kilometeres;
} s[3];
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter the Driver Name:");
        scanf("%s", &s[i].name);
        printf("\nEnter the Driving Licience Number:");
        scanf("%d", &s[i].driving_licience_number);
        printf("\nEnter the Route:");
        scanf("%d", &s[i].route);
        printf("\nEnter the Distance travelled in Kilometeres:");
        scanf("%d", &s[i].kilometeres);
    }
    printf("\n\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("\n%d.Driver Name is:%s\nDriver Licience Number is:%d\nRoute id:%d\n Distance Travelled is:%d", i, s[i].name, s[i].driving_licience_number, s[i].route, s[i].kilometeres);
    }
    getch();
    return 0;
}
