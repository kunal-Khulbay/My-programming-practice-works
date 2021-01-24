/*Author: ALOK KHULBAY.
Date:17-10-2020.
Purpose:To self learn.
Program to implement Hospital Management by 2 classes with inheritance.
*/
#include <iostream>
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
        std::cout << "Doctor operating " << name << "is:" << doctor;
        std::cout << "\n"
                  << name << " is suffering from:" << dis;
    }
};
class B : A
{
    char ward;
    int room, bed, days, bill, fees;

public:
    void input()
    {
        A::input();
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
};
int main()
{
    int n;
    std::cout << "Enter Number of Patients:";
    std::cin >> n;
    B b[10];
    std::cout << "Enter the Information\n";
    for (int i = 0; i < n; i++)
    {
        b[i].input();
    }
    std::cout << "The Database is:";
    for (int i = 0; i < n; i++)
    {
        b[i].print();
    }
    std::cout << std::endl;
    return 0;
}