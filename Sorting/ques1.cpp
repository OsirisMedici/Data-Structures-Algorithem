#include <iostream>
using namespace std;

int printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int sortArr(int arr[], int n)
{
    int minIndex;

    for (int i = 0; i < n - 1; i++)
    {
        minIndex = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
    return minIndex;
}

int main()
{
    int arr2[7] = {2, 45, 56, 59, 61, 64, 100};
    int arr7[5] = {61, 62, 56, 76, 23};

    cout << "Print" << endl;

    sortArr(arr2, 7);
    printArr(arr2, 7);

    cout << "Print2" << endl;

    // sortArr(arr7, 5);
    // printArr(arr7, 5);

    return 0;
}