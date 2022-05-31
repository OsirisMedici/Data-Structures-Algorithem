#include <bits/stdc++.h>
using namespace std;

int mergeTheSort(int *arr, int start, int end)
{

    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Let's create tempory arrays
    int *firstArray = new int[len1];
    int *secondArray = new int[len2];

    // copy spited array into these temporary arrays
    int mainIndex = start;
    for (int i = 0; i < len1; i++)
    {
        firstArray[i] = arr[mainIndex];
        mainIndex++;
    }
    mainIndex = mid + 1;
    for (int i = 0; i < len1; i++)
    {
        secondArray[i] = arr[mainIndex];
        mainIndex++;
    }

    int i = 0;
    int j = 0;
    mainIndex = start;

    while (i < len1 && j < len2)
    {
        if (firstArray[i] < secondArray[j])
        {
            arr[mainIndex++] = firstArray[i++];
        }
        else
        {
            arr[mainIndex++] = secondArray[j++];
        }
    }

    while (i < len1)
    {
        arr[mainIndex++] = firstArray[i++];
    }

    while (j < len1)
    {
        arr[mainIndex++] = secondArray[j++];
    }
}

void sortArray(int arr[], int start, int end)
{
    // Base case
    if (start >= end)
    {
        return;
    }
    // Mid point
    int mid = start + (end - start) / 2;

    // sort left side
    sortArray(arr, start, mid);

    // sort Right side
    sortArray(arr, mid + 1, end);

    mergeTheSort(arr, start, end);
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
    int array[9] = {23, 1, 34, 3, 4, 22, 89, 100, 10};
    int n = 9;

    sortArray(array, 0, n - 1);
    printArray(array, n);

    return 0;
}