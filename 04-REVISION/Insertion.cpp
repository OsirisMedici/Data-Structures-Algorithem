#include <iostream>
using namespace std;

int PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int InsertionArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];

        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int linear3[8] = {23, 54, 32, 78, 87, 2, 7, 100};

    InsertionArray(linear3, 8);
    PrintArray(linear3, 8);
}