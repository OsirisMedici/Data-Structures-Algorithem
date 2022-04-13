#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int select(int arr[], int size)
{
    // int minIndex;
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main()
{
    int linear3[8] = {23, 54, 32, 78, 87, 2, 7, 100};

    select(linear3, 8);
    printArray(linear3, 8);

    return 0;
}