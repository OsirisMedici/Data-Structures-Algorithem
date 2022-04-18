#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int bubbleArray(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int linearr[8] = {23, 54, 32, 78, 87, 2, 7, 100};

    bubbleArray(linearr, 8);
    printArr(linearr, 8);

    return 0;
}