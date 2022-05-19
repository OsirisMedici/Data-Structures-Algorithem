#include <bits/stdc++.h>
using namespace std;

void Printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int arr[], int n)
{
    int j, temp;
    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--)
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
    int arr[7] = {2, 34, 19, 10, 100, 76, 83};
    // int n = 7;/

    insertionSort(arr, 7);
    Printarray(arr, 7);

    return 0;
}