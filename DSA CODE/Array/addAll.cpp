#include <iostream>
using namespace std;

int addArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i <= size - 1; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is: " << sum << endl;
    // return;
}

int main()
{
    int arr[6] = {2, 4, 5, 78, 7, 48};

    addArray(arr, 6);
}