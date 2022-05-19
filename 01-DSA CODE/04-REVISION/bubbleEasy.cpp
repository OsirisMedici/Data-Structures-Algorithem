#include <bits/stdc++.h>
using namespace std;

void Printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i; j++)
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
    int arr[7] = {2, 34, 19, 10, 100, 76, 83};
    // int n = 7;

    bubbleSort(arr, 7);
    Printarray(arr, 7);

    return 0;
}