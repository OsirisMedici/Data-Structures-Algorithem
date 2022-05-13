#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleArr(int arr[], int n)
{
    /// base case
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive Call
    bubbleArr(arr, n - 1);

    // return bubbleArr;
}

int main()
{
    int arr[7] = {23, 34, 32, 12, 2, 100, 87};
    int n = 7;

    bubbleArr(arr, 7);

    // Print sorted Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}