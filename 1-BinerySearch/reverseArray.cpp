// This logic is not working for reverseing this array

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
    int end = size;

    for (int i = 0; i <= size; i++)
    {

        swap(arr[i], arr[size - i]);
    }
    // cout << "size " << size << endl;

    // return;
}

int main()
{
    int rArray[7] = {2, 5, 7, 11, 13, 17, 34};

    reverseArray(rArray, 7);
    printArray(rArray, 7);

    return 0;
}

