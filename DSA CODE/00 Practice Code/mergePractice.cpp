#include <bits/stdc++.h>
using namespace std;

int mergeTheArray(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *firstArray = new int[len1];
    int *secondArray = new int[len2];

    int mainIndex = s;
    for (int i = 0; i < len1; i++)
    {
        firstArray[i] = arr[mainIndex];
        mainIndex++;
    }

    mainIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        secondArray[i] = arr[mainIndex];
        mainIndex++;
    }

    int i = 0;
    int j = 0;
    mainIndex = s;

    while (i < s && j < e)
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

    while (j < len2)
    {
        arr[mainIndex++] = secondArray[j++];
    }
}

void SortArray(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    SortArray(arr, s, mid);
    SortArray(arr, mid + 1, e);

    mergeTheArray(arr, s, e);
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
    int arrayAB[7] = {23, 65, 78, 900, 98, 100, 1};
    int n = 7;

    SortArray(arrayAB, 0, n - 1);

    PrintArray(arrayAB, 7);

    return 0;
}