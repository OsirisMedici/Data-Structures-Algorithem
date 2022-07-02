#include <bits/stdc++.h>
using namespace std;

int MergedFunction(int arr1[], int n, int arr2[], int m, int arr3[])
{

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
    }

    while (i < n)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}

void printMergedArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[8] = {23, 26, 67, 88, 90, 100, 134, 164};
    int arr2[6] = {2,3,9,17,306,444};

    int mergeArray[14] = {0};

    MergedFunction(arr1, 8, arr2, 6, mergeArray);

    printMergedArray(mergeArray, 14);

    return 0;
}