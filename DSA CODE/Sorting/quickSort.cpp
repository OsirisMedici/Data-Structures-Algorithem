#include <bits/stdc++.h>
using namespace std;

int partitionMethod(int arr[], int s, int e)
{
    // we declare a Pivot and initialise with start
    // that means we set our start index as a pivot
    int pivot = arr[s];

    int count = 0;

    // Now here we will put our pivot at the correct index
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // let's swap elements of they are not in the correct sorting
    int i = s;
    int j = e;

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

void sortArray(int arr[], int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    // Create a Partition and link it with a fuction which will actually find out partition index
    int p = partitionMethod(arr, start, end);
    // Left side
    sortArray(arr, start, p - 1);
    // Right side
    sortArray(arr, p + 1, end);
}

// void printArray(int arr[], int n)
// {

// }

int main()
{
    int arrABB[9] = {23, 21, 56, 10, 78, 65, 4, 8, 9};
    int n = 9;

    sortArray(arrABB, 0, n - 1);

    // printArray(arrABB, n);

    for (int i = 0; i < n; i++)
    {
        cout << arrABB[i] << " ";
    }

    return 0;
}