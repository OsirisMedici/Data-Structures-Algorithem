#include <bits/stdc++.h>
using namespace std;

void cyclicSort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
    }
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
    int arrayU[7] = { 7,6,5,4,3,2,1};
    int n = 7;

    cyclicSort(arrayU, n);

    PrintArray(arrayU, n);

    return 0;
}