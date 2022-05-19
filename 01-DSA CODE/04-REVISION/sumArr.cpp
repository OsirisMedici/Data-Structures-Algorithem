#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumArr(int arr[], int size)
{
    // Base case
    if (size == 0)
    {
        return 0;
    }

    if (size == 0)
    {
        return arr[0];
    }

    int nextPart = sumArr(arr + 1, size - 1);
    int sumTotal = arr[0] + nextPart;
    return sumTotal;
}

int main()
{
    int arr[6] = {12, 2, 5, 7, 100};
    int size = 6;  

    int answer = sumArr(arr, size);
    cout << "sum is: " << answer << endl;
}