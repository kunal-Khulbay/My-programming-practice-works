/*Author: ALOK KHULBAY.
Date:13-10-2020.
Purpose:To self learn.
Program to display compute equipment to explore the Multiple Inheritance.
*/
#include <iostream>
#include <string.h>
class cpu
{
private:
    char mother[10], ram[10], hdd[10];

public:
    cpu(const char *m, const char *r, const char *h)
    {
        strcpy(mother, m);
        strcpy(ram, r);
        strcpy(hdd, h);
    }
    void show()
    {
        std::cout << "RAM is " << ram << std::endl;
        std::cout << "HDD is " << hdd << std::endl;
        std::cout << "Mother Board is " << mother << std::endl;
    }
};
class acc
{
    char key[10], mouse[10], monitor[10], speaker[10];

public:
    acc(const char *k, const char *ms, const char *m, const char *s)
    {
        strcpy(key, k);
        strcpy(mouse, ms);
        strcpy(monitor, m);
        strcpy(speaker, s);
    }
    void show()
    {
        std::cout << "Monitor is " << monitor << std::endl;
        std::cout << "Keyboard is " << key << std::endl;
        std::cout << "Mouse is " << mouse << std::endl;
        std::cout << "Speaker is " << speaker << std::endl;
    }
};
class computer : cpu, acc
{
public:
    computer(const char *mother, const char *hdd, const char *ram, const char *k, const char *ms, const char *m, const char *s) : cpu(mother, ram, hdd), acc(k, ms, m, s)
    {
    }
    void show()
    {
        std::cout << "The computer is " << std::endl;
        cpu::show();
        acc::show();
    }
};
int main()
{
    computer c("Azza", "10.2 GB", "64 MB", "TVS GOLD", "LOGITECH", "MICROTEK", "YAHAMA");
    c.show();
    return 0;
}