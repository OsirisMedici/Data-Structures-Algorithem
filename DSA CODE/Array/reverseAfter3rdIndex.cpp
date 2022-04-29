#include <iostream>
using namespace std;

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int reverseArray(int arr[], int size)
{
    // cout << "size " << size << endl;
    int start = 4;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return 0;
    {
        /* code */
    }
}

int main()
{
    int rArray[7] = {2, 5, 7, 11, 13, 17, 34};

    reverseArray(rArray, 7);
    cout << "Array will be change after 3rd Index: ";
    printArray(rArray, 7);

    return 0;
}