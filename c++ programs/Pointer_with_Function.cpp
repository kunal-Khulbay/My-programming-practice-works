/*Author: ALOK KHULBAY.
Date:07-11-2020.
Purpose:To self learn.
Program to use pointer with fuction.
*/
#include <iostream>
int main()
{
    int arr[10], size;
    std::cout << "Enter the size of the array till 10:";
    std::cin >> size;
    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    void show(int *num, int n);
    show(&arr[0], size);
    return 0;
}
void show(int *num, int n)
{
    int i = 0;
    std::cout << "Elements are:\n";
    while (i < n)
    {
        std::cout << *num << std::endl;
        i++;
        num++;
    }
}