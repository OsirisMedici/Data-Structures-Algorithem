#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int sortInsert(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int temp = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    int inserArr[11] = {23, 567, 34, 101, 54, 32, 78, 87, 2, 7, 100};

    sortInsert(inserArr, 11);
    PrintArray(inserArr, 11);

    return 0;
}