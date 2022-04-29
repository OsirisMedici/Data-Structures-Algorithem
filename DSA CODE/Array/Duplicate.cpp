// this code is not  a Good practice
// see same solution in CodeNinja File in repo

#include <iostream>
using namespace std;

int dupicateArr(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i <= size; i++)
    {
        if (i == arr[i])
        {
            count++;
        }
        cout << count;
    }
}

int printArr(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {2, 3, 4, 2, 4, 7, 1};

    dupicateArr(arr, 7);
    // printArr(arr, 7);
}