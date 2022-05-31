#include <bits/stdc++.h>
using namespace std;

int partFunc(int arr[], int start, int end)
{

    int pivot = arr[start];

    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (i <= pivot)
        {
            i++;
        }
        while (i > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void sortArray(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int partition;
    partition = partFunc(arr, start, end);

    sortArray(arr, start, partition - 1);
    sortArray(arr, partition + 1, end);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {2, 5, 3, 10, 87, 100, 987};
    int n = 7;

    sortArray(arr, 0, n - 1);
    printArray(arr, n);

    return 0;
}