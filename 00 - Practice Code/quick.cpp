#include <bits/stdc++.h>
using namespace std;

int PartisionFunction(int arr[], int start, int end)
{

    int pivot = arr [start];
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
        {
            count++ ;
        }
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
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

void SortHogaYahan(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int partision = PartisionFunction(arr, start, end);

    SortHogaYahan(arr, start, partision - 1);

    SortHogaYahan(arr, partision + 1, end);
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arrayHai[5] = {223, 56, 9, 10, 100};
    int n = 5;

    SortHogaYahan(arrayHai, 0, n - 1);

    PrintArray(arrayHai, n);

    return 0;
}