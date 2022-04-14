#include <iostream>
#include <vector>
using namespace std;

void printArr(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr;
    cout << "Enter a Limit of elements in array:  ";
    int n;
    cin >> n;

    cout << "Enter elemets of your array one by one: ";

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    // printArr(arr)
    cout << "Your Array is: ";

    printArr(arr);
    // cout << "[ " << printArr(arr) << " ]" << endl;

    return 0;
}