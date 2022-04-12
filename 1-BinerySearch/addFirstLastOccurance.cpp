#include <iostream>
using namespace std;

// int printArray(int arr[], int n)
// {
//     for (int i = 0; i <= n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

int firstOcuur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            // start = 0;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int LastOcuur(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr5[11] = {1, 2, 2, 2, 2, 2, 5, 6, 6, 7, 9};
    // cout << "lssse" << endl;

    cout << "First Occurance of 2 is on Index: " << firstOcuur(arr5, 11, 2) << endl;
    // cout << "lssse" << endl;

    cout << "Last Occurance of 2 is on Index: " << LastOcuur(arr5, 11, 2) << endl;
    // cout < < < < endl;

    // int ans = 0;
    // int last_index = LastOcuur(arr5, 11, 2);
    // int first_index = first_index(arr5, 11, 2);

    // ans = ( last_index - first_index) + 1;
    // cout << "Total Number of Occurance: " << ans << endl;

    return 0;
}