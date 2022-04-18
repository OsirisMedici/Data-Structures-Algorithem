#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int printSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int sortArray(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int minimum = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }

        swap(arr[minimum], arr[i]);
    }
    // return minimum;
}

int main()
{
    int linearr[8] = {23, 54, 32, 78, 87, 2, 7, 100};

    sortArray(linearr, 8);
    printSort(linearr, 8);

    return 0;
}