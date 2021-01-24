/*Author: ALOK KHULBAY.
Date:25-09-2020.
Purpose:To self learn.
Program to increment rolno to illustrate the concept of Derived class constructor.
*/
#include <iostream>
using namespace std;
class RollNo
{
protected:
    int rn;

public:
    RollNo()
    {
        rn = 0;
    }
    RollNo(int r)
    {
        rn = r;
    }
    int read_rn()
    {
        return rn;
    }
    RollNo operator++()
    {
        rn++;
        return RollNo(rn);
    }
};
class student : public RollNo
{
public:
    student() : RollNo()
    {
    }
    student(int r) : RollNo(r)
    {
    }
    student operator--()
    {
        rn--;
        return student(rn);
    }
};
int main()
{
    student s1;
    student s2(100);
    cout << "\n s1=" << s1.read_rn();
    cout << "\n s2=" << s2.read_rn();
    s1++;
    s1++;
    s1++;
    cout << "\n s1=" << s1.read_rn();
    s2--;
    s2--;
    cout << "\n s2=" << s2.read_rn();
    student s3 = s2--;
    cout << "\n s3:" << s3.read_rn();
    return 0;
}