/*Author:Alok Khulbay
Date:25/08/2020
Purpose:-To self learn
Program to Add two Matrices to learn thr concept of arrays within the class.
*/
#include <iostream>
using namespace std;
class mat
{
private:
    int a[10][10], y[10][10], m, n;

public:
    void readmat()
    {
        cout << "Enter number of rows and coloumns of a matrix:" << endl;
        cin >> m;
        cin >> n;
        cout << "Enter the elements of the Matrix X:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Enter the elementa of Matrix Y:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> y[i][j];
            }
        }
    }
    void addmat()
    {
        int add[10][10];
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    add[i][j] = a[i][j] + y[i][j];
                }
            }
        }
        cout << "Addition of the Matrix:" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << add[i][j] << "  ";
            }
            cout << endl;
        }
    }
};
int main()
{
    mat obj;
    obj.readmat();
    obj.addmat();
    return 0;
}