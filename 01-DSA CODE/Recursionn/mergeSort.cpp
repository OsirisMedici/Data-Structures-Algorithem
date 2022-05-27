#include <bits/stdc++.h>
using namespace std;

int mergeArr(int *arr, int start, int end)
{
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // Now we will copy values

    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    // Merged two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
                }

        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void SortArray(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    // Sorting Left case
    SortArray(arr, start, mid);

    // Sorting Right case
    SortArray(arr, mid + 1, end);

    // Merge array
    mergeArr(arr, start, end);
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {23, 34, 32, 12, 2, 100, 87};
    int n = 7;

    SortArray(arr, 0, n - 1);

    PrintArray(arr, n);

    return 0;
}