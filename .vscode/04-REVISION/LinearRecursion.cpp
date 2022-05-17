#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool LinearArr(int arr[], int size, int key)
{
    // base case
    if (size == 0)
    {
        return false;
    }

    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        int remainProcess = LinearArr(arr + 1, size - 1, key);
        return remainProcess;
    }

    // recursive process
}

int main()
{
    int arr[6] = {12, 2, 5, 7, 100};
    int size = 6;
    int key;
    cout << "Enter key: "  ;
    cin >> key;

    bool keyAnswer = LinearArr(arr, 6, key);
    // cout << "key: " << keyAnswer;

    if (keyAnswer)
    {
        cout << "Yesss Present hai Bosss";
    }
    else
    {
        cout << "Naaaa, Present nahin hai Bosss";
    }
}