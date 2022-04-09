#include <iostream>
using namespace std;

int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i <= size; i++)
    {
        ans = ans ^ arr[i];
    }
}

int main()
{
    int uniqueArr[5] = {1, 3, 5, 1, 3};

    findUnique(uniqueArr, 5);
    printarray(uniqueArr, 5);
}
