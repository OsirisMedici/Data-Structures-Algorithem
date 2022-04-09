#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 4, 5, 78, 7, 28};
    int sum = 0;

    for (int i = 0; i <= arr[6]; i++)
    {
        sum = sum + arr[i];
    }
    cout << "sum is" << sum << endl;
}