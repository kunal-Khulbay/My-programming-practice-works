/*Author:Alok Khulbay
Date:18/08/2020
Purpose:To complete the C Programming Playlist
*/
#include <stdio.h>
int Largset_Number_in_Array(int arr[], int size)
{
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int size, arr[size];
    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter the elements in teh array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = Largset_Number_in_Array(arr, size);
    printf("The largest number in the array is %d\n", largest);
    printf("Array elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}