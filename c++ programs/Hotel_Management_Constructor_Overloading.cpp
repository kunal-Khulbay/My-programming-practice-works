/*Author: ALOK KHULBAY.
Date:09-09-2020.
Purpose:To self learn.
Program to maintain otel Maagement with array of objects with constructors.
*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class hotel
{
    char otel[10], single, customer[20];
    int room, bill_day, days;
    float checkin, checkout;
    double total;

public:
    hotel(char s[], int d)
    {
        strcpy(otel, "Five Star");
        strcpy(customer, s);
        days = d;
        checkout = 12.00;
        total = 0;
    }
    void input()
    {
        cout << "Enter Room Number:";
        cin >> room;
        cout << endl
             << "Press y/n for single room....";
        cin >> single;
        if (single == 'y' || single == 'Y')
        {
            bill_day = 700;
        }
        else
        {
            bill_day = 1000;
        }
        cout << "\nEnter time of checking in:";
        cin >> checkin;
        total = bill_day * days;
        total = total * 12.4 / 100;
    }
    void print()
    {
        cout << "Room number is :" << room << endl;
        cout << "customer name is :" << customer << endl;
        cout << "Total bill in Rs :" << total << endl;
        cout << "Room is :" << endl;
        if (single == 'y' || single == 'Y')
        {
            cout << "Single Bed";
        }
        else
        {
            cout << "Doubele Bed";
        }
        cout << "\n Time of checking in is " << checkin << "o'clock";
        cout << "\n Time of checking in is " << checkout << "o'clock" << endl
             << endl
             << endl;
    }
};
int main()
{
    hotel h[2] = {hotel("Alok", 5), hotel("Neeraj", 7)};
    system("cls");
    for (int i = 0; i < 1; i++)
    {
        cout << "Enter information of Customer" << i + 1 << "==>\n";
        h[i].input();
    }
    cout << "Press any Key to dhow records...";
    getch();
     system("cls");
    for (int i = 0; i < 1; i++)
    {
        cout << "Information of Customer" << i + 1 << "is==>\n";
        h[i].print();
    }
    return 0;
}