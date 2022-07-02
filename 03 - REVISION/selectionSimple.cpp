#include <bits/stdc++.h>
using namespace std;

void Printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int slectSort(int arr[], int size)
{
    int minindex;
    for (int i = 0; i < size - 1; i++)
    {
        minindex = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
            swap(arr[minindex], arr[i]);
        }
    }
}

int main()
{
    int arr[7] = {2, 34, 19, 10, 100, 76, 83};
    int n = 7;

    slectSort(arr, 7);
    Printarray(arr, 7);

    return 0;
}