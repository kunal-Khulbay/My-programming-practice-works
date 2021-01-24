/*Author: ALOK KHULBAY.
Date:23-09-2020.
Purpose:To self learn.
Program to join the different strings by using the locical AND (&&) opeartor and Operator Overloading.
*/
#include <iostream>
#include <string.h>
#define size 10
// using namespace std;
class string
{
private:
    char str[size];

public:
    string()
    {
        strcpy(str, "");
    }
    string(const char a[])
    {
        strcpy(str, a);
    }
    void display()
    {
        std::cout << str << "";
    }
    string operator&&(string); //Declearation of Overlaoded function.
};
string string::operator&&(string s)
{
    string t;
    strcpy(t.str, str);
    strcat(t.str, s.str);
    return (t);
}
int main()
{
    string ob1 = "COLLAGE";
    string ob2 = "AMRITSAR";
    string ob3;
    ob1.display();
    std::cout << std ::endl;
    ob2.display();
    std::cout << std::endl;
    ob3.display();
    std::cout << std::endl;
    ob3 = ob1 && ob2;
    ob3.display();
    std::cout << std::endl;
    return 0;
}