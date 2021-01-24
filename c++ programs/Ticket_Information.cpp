/*Author:Alok Khulbay
Date:25/11/2020
Purpose:To self learn.
Program to write an read the ticket information and fare of a passenger in and from the files by using the multiple objects.
*/
#include <iostream>
#include <fstream.h>
class airlines
{
private:
    char tktno[5];
    int fare;

public:
    void add()
    {
        std::cout << "\nEnter Ticket Number";
        std::cin >> tktno;
        std::cout << fare;
    }
    void display()
    {
        std::cout << "\nTicket Number is" << tktno;
    }
};
int main()
{
    char finame[10];
    std::cout << "\nEnter FileName";
    std::cin >> finame;
    std::ostream flight(finame, std::ios::dot);
    flight.open(finname);
    airlines air;
    air.add();
    flight.write(char *) & air, sizeof(air);
    flight.close();
    std::cout << "\n Contents of the file is" << finame;
    std::ifstream flight1;
    flight1.open(finame);
    flight1.read((char *)&air, sizeof(air));
    do
    {
        air.display();
        flight1.read((char *)&air, sizeof(air));
    } while (flight1);
    flight1.close();
    return 0;
}