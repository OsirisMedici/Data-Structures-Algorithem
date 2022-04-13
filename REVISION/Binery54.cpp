#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int Binery6(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    for (int i = 0; i < size; i++)
    {
        if (key == arr[mid])
            return mid;

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        int mid = start + (end - start) / 2;

        // cout << mid << endl;
    }
}

int main()
{
    int linear3[8] = {23, 54, 32, 78, 87, 2, 7, 100};

    printArray(linear3, 8);
    cout << endl;
    cout << "enter any key you want to find out from this array: ";

    int key;
    cin >> key;

    bool keyFound;
    if (keyFound)
    {
        cout << "your key on Index: " << Binery6(linear3, 8, key) << endl;
    }
    else
    {
        cout << "Your Key is not found";
    }
    return 0;
}