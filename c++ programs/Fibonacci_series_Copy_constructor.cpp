/*Author: ALOK KHULBAY.
Date:07-09-2020.
Purpose:To self learn.
Program to generate Fibonacci Series using Copy constructor.
*/
#include <iostream>
using namespace std;
class fibbo
{
private:
    int i, j, k;

public:
    fibbo()
    {
        i = 0;
        j = 1;
        k = i + j;
    }
    fibbo(fibbo &ptr)
    {
        i = ptr.i;
        j = ptr.j;
        k = i + j;
    }
    void add()
    {
        i = j;
        j = k;
        k = i + j;
    }

    void display()
    {

        cout << k << "\n";
    }
    ~fibbo()
    {
        cout << "Destructor Invoked" << endl;
    }
};
int main()
{
    class fibbo x;
    cout << "Fibonacci Series is:\n";
    for (int i = 0; i < 7; i++)
    {
        x.display();
        x.add();
    }
    return 0;
}