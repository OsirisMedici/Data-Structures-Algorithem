#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int num;
    cout << "Enter a Limit : ";
    cin >> num;
    cout << a << " " << b << " ";

    for (int i = 1; i < num; i++)
    {
        int temp = a + b;
        cout << temp << " ";
        a = b;
        b = temp;
        // cout << temp << " ";
    }
}