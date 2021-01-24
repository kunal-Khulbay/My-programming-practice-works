/*Author: ALOK KHULBAY.
Date:04-10-2020.
Purpose:To self learn.
Program to implement Stack to illustrate the concept of overloading member functiom.
*/
#include <iostream>
using namespace std;
class stack
{
protected:
    int a[10];
    int top;

public:
    stack()
    {
        top = 0;
    }
    void push(int var)
    {
        a[top] = var;
        top++;
    }
    int pop()
    {
        top--;
        return a[top];
    }
};
class stack2 : public stack
{
public:
    void push(int var)
    {
        if (top < 10)
        {
            cout << "Pushing " << var << " to stack " << endl;
            stack::push(var);
            return;
        }
        else
        {
            cout << "Overflow occurrs\n";
            cout << "Stack is Full" << endl;
            exit(1);
        }
    }
    int pop()
    {
        if (top >= 0)
        {
            return stack::pop();
        }
        else
        {
            cout << "Underflow occurs\n";
            cout << "Stack is Empty" << endl;
            return 0;
        }
    }
};
int main()
{
    stack2 s1;
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(70);
    // system("cls");
    cout << "Popped element is " << s1.pop() << endl;
    cout << "Popped element is " << s1.pop() << endl;
    cout << "Popped element is " << s1.pop() << endl;
    cout << "Popped element is " << s1.pop() << endl;
    return 0;
}