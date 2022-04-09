#include <iostream>
using namespace std;

int swapAlternate(int arr[], int size)
{
    {
        for (int i = 0; i < size; i = i + 2)
        {
            if (i + 1 < size)
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        // cout << "Print statement" << endl;
    }
}

int printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // cout << "Print statement" << endl;
}

int main()
{
    // This is a Odd array
    int even[10] = {
        2,
        34,
        4,
        56,
        78,
        10,
        23,
        54,
        73,
    };

    swapAlternate(even, 10);
    printArray(even, 10);
    // cout << "Print statement" << endl;
}
