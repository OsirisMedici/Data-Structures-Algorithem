#include <iostream>
using namespace std;

int printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int bubbleArr(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        // another loop for swapping
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int linear3[8] = {23, 89, 32, 78, 87, 2, 7, 100};

    bubbleArr(linear3, 8);
    printArr(linear3, 8);

    return 0;
}