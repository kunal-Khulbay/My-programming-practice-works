/*Author: ALOK KHULBAY.
Date:18-10-2020.
Purpose:To self learn.
Program to implement Hospital Management by 2 classes with Friend Function.
*/
#include <iostream>
void output(int);
void input(int);
class A
{
    char name[20], doctor[20], dis[20];

public:
    void input()
    {
        std::cout << "Enter Name of the patient:";
        std::cin >> name;
        std::cout << "Enter Name of the Doctor operating patient:";
        std::cin >> doctor;
        std::cout << "Enter Name of the Disease patient is sufering from:";
        std::cin >> dis;
    }
    void print()
    {
        std::cout << "Patient's name is:" << name;
        std::cout << "\nDoctor operating " << name << "is:" << doctor;
        std::cout << "\n"
                  << name << " is suffering from:" << dis;
    }
    friend void input(int);
    friend void output(int);
} a[10];
class B
{
    char ward;
    int room, bed, days, bill, fees;

public:
    void input()
    {
        std::cout << "Is patient living in private room?(y/n):";
        std::cin >> ward;
        if (ward == 'y' || ward == 'Y')
        {
            std::cout << "Enter the Room Number:";
            std::cin >> room;
        }
        else
        {
            std::cout << "Enter Bed Number:";
            std::cin >> bed;
        }
        std::cout << "Enter Number of Days patient living in Hospital:";
        std::cin >> days;
        std::cout << "Enter the Fees per day:";
        std::cin >> fees;
        bill = fees * days;
    }
    void print()
    {
        if (ward == 'y' || ward == 'Y')
        {
            std::cout << "\n Patient is in the private room Number:" << room;
        }
        else
        {
            std::cout << "\n Patient is in the public ward on Bed Number:" << bed;
        }
        std::cout << "\n He is living in Hospital for:" << days << "days";
        std::cout << "\n Bill Till Date is::" << bill;
    }
    friend void input(int);
    friend void output(int);
} b[10];
int main()
{
    int n;
    std::cout << "Enter Number of Patient's:";
    std::cin >> n;
    std::cout << "Enter the Information\n";
    input(n);
    std::cout << "The Database is:";
    output(n);
    std::cout << std::endl;
    return 0;
}
void input(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "\n Enter Information of patient" << i + 1 << ".:\n";
        a[i].input();
        b[i].input();
    }
}
void output(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "\n The Information of patient " << i + 1 << " is\n";
        a[i].print();
        b[i].print();
    }
}