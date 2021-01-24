/*Author: ALOK KHULBAY.
Date:19-09-2020.
Purpose:To self learn.
Program to Overload New and Delete Operator.
*/
#include <iostream>
using namespace std;
class A
{
    int a;
    float b;

public:
    void print()
    {
        cout << "A is ==>" << a << endl;
        cout << "B is ==>" << b << endl;
    }
    A(int p, float q)
    {
        a = p;
        b = q;
    }
    void operator delete(void *p)
    {
        cout << "\nMemory Freed" << endl;
        free(p);
    }
    void *operator new(size_t size)
    {
        cout << "Memory Alloted." << endl;
        void *p = malloc(size);
        return p;
    }
};
int main()
{
    A *a;
    a = new A(8, 7.786);
    a->print();
    delete a;
    return 0;
}