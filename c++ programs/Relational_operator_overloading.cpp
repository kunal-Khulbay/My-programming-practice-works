/*Author: ALOK KHULBAY.
Date:21-09-2020.
Purpose:To self learn.
Progarm to illustrate the concept of Relational opeator overloading.
*/
#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    Test()
    {
        a = b = 0;
    }
    Test(int i, int j)
    {
        a = i;
        b = j;
    }
    int operator>(Test);
};
int Test::operator>(Test obj)
{
    if ((a > obj.a) && (b > obj.b))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Test aa(2, 3), bb(4, 6);
    if (aa > bb)
    {
        cout << "Hello World" << endl;
    }
    else
    {
        cout << "Good Bye" << endl;
    }
    return 0;
}