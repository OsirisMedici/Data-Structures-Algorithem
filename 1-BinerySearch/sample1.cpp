#include <iostream>
using namespace std;

int searchBin(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
            // start = 0;
        }

        //(key < arr[mid])

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int bin[9] = {2, 34, 45, 56, 59, 65, 73, 81, 100};
    // key = 54

    // searchBin(bin, 9, 34);

    cout << "THe Index of key is By BInery search: " << searchBin(bin, 9, 2) << endl;

    return 0;
}