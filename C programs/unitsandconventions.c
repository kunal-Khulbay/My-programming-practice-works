/*  Author: ALOK KHULBAY.
    Date: 31-03-2020.
    Purpose: TO self learn.
    Programbto convert different units.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        char a;
        float n, feet, miles, inch, kg, metere;
        printf("Press 1 to convert Kilometer to Miles\n");
        printf("Press 2 to convert Inches to Feet\n");
        printf("Press 3 to convert Cemtimeter to Inches\n");
        printf("Press 4 to convert Pound to Kilograms\n");
        printf("Press 5 to convert Inches to Meteres\n");
        printf("Press q to Quit\n");
        scanf(" %c", &a);

        switch (a)
        {
        case '1':
            printf("Enter the value of Kilometers to convert it in Miles:");
            scanf("%f", &n);
            miles = n * 0.6214;
            printf("Miles=%f\n", miles);
            break;
        case '2':
            printf("Enter the value in Inches to convert to Feet:");
            scanf("%f", &n);
            feet = n / 12;
            printf("Feet=%f\n", feet);
            break;
        case '3':
            printf("Enter the value of Centimeter to convert it to Inch:");
            scanf("%f", &n);
            inch = 0.4 * n;
            printf("Inch=%f\n", inch);
            break;
        case '4':
            printf("Enter the value of Pound to convert in Kilograms:");
            scanf("%f", &n);
            kg = 0.45 * n;
            printf("Kilogram=%f\n", kg);
            break;
        case '5':
            printf("Enter the value of Inches to convert to Metere:");
            scanf("%f", &n);
            metere = 0.0254 * n;
            printf("Metere=%f\n", metere);
            break;
        case 'q':
            exit(1);
        default:
            printf("Invalid Selection\n Thanks For Using\n");
            break;
        }
    }
    return 0;
}
