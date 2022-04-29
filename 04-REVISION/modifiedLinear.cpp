#include <iostream>
using namespace std;

int SearchArray(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            cout << "key  is on the Index " << i << endl;

            return 1;
        }
    }
    return 0;
}

int main()
{
    int linear3[8] = {23, 54, 32, 78, 87, 2, 7, 100};
    int key;
    cout << "Enter a Key you want to find: ";

    cin >> key;

    bool found = SearchArray(linear3, 8, key);

    if (found)
    {
        cout << "Key is present. " << endl;
    }
    else
    {
        cout << "Key is not present. " << endl;
    }
    return 0;
}