#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int findArray(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int printAraay(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int bine[5] = {23, 34, 45, 56, 78};
    printAraay(bine, 5);
    int key;
    cout << endl;

    cout << "Enter Your fav key: ";
    cin >> key;

    // findArray(bine, 5, key);

    cout << "Your key is on the index: " << findArray(bine, 5, key) << endl;

    return 0;
}