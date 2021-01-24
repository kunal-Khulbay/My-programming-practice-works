/*Author Alok Khulbay.
Date:-19/10/2020
Purpose:To self learn.
Program to display student result rank wise.
*/
#include <iostream>
#include <iomanip>
class A
{
    char name[20];
    int roll;

public:
    void input()
    {
        std::cout << "Enter Name & Roll-No:";
        std::cin >> name >> roll;
    }
    void print()
    {
        std::cout << std::setw(20) << name << "    " << roll;
    }
};
class B
{
    int s1, s2, s3;

public:
    int input()
    {
        getchar();
        std::cout << "Enter Marks in 3 subjects:";
        std::cin >> s1 >> s2 >> s3;
        return s1 + s2 + s3;
    }
};
class C : A, B
{
public:
    int total;
    void input()
    {
        A::input();
        total = B::input();
    }
    void print()
    {
        A::print();
        std::cout << std::setw(12) << total << std::setw(8);
    }
} c[5];
void sort(int);
int main()
{
    int n, rank = 1;
    std::cout << "Enter the Number of Students:";
    std::cin >> n;
    std::cout << "Enter the Inforation\n\n\n";
    for (int i = 0; i < n; i++)
    {
        std::cout << "Student " << i + 1 << std::endl;
        c[i].input();
    }
    sort(n);
    std::cout << "The Database is:\n\n";
    std::cout << std::setw(20) << "Name" << std::setw(8) << "Roll-No" << std::setw(8) << "Total" << std::setw(8) << "Rank"
              << "\n\n";
    c[0].print();
    std::cout << rank << std::endl;
    int p = rank;
    for (int i = 1; i < n; i++)
    {
        c[i].print();
        if (c[i].total == c[i - 1].total)
        {
            std::cout << p;
        }
        else
        {
            std::cout << rank;
        }
        rank++;
        std::cout << std::endl;
    }
    return 0;
}
void sort(int n)
{
    C c1;
    for (int p = 1; p < n; p++)
    {
        for (int i = 0; i < n; i++)
        {
            if (c[i].total < c[i + 1].total)
            {
                c1 = c[i];
                c[i] = c[i + 1];
                c[i + 1] = c1;
            }
        }
    }
}