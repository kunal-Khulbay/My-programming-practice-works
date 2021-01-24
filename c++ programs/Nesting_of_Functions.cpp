/*Author:Alok Khulbay
Date:29/08/2020
Purpose:To self learn.
Program to add two values to leaen the concept of Nesting of function.
*/
#include <iostream>
using namespace std;
class abc
{
private:
    int a, b, c;

public:
    void Read();
    void Write()
    {
        cout << "SUM of TWO Numbers is:" << sum() << endl;
    }
    int sum()
    {
        c = a + b;
        return c;
    }
};

void abc ::Read()
{
    cout << "Enter the  value of A & B:" << endl;
    cin >> a >> b;
}
int main()

{
    class abc m1;
    m1.Read();
    m1.Write();
    return 0;
}
