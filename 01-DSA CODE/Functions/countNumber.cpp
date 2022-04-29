#include <iostream>
using namespace std;

void printNum(int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the last digit you want: ";
    cin >> n;

    printNum(n);
}