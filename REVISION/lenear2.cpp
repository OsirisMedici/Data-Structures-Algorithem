#include <iostream>
using namespace std;

int SearchArray(int arr[], int size, int key)
{
    // int key = 32;
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "Your Answer is on " << i << " Index:  " << endl;
        }
        // else
        // {
        // }
    }
}

int main()
{
    int linear3[8] = {23, 54, 32, 78, 87, 2, 7, 100};
    int key;

    cout << "Enter a Numbetr you want to find Index: ";

    cin >> key;

    SearchArray(linear3, 8, key);
}