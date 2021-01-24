/*Author Alok Khulbay.
Date:-21/08/2020
Purpose:To self learn.
Program to show classes with one object.
*/
#include <iostream>
using namespace std;
class student
{
private:
    int rn;
    string name;

public:
    void Read_Data()
    {
        cout << "\n Enter the Roll Number:" << endl;
        cin >> rn;
        getchar();
        cout << "\n Enter the Name:" << endl;
        getline(cin, name);
    }
    void Write_Data()
    {
        cout << "\n Roll Number is:" << rn;
        cout << "\n Name is:" << name << endl;
    }
};
int main()
{
    class student s1;
    s1.Read_Data();
    s1.Write_Data();
    return 0;
}