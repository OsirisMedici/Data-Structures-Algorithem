#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cout << "Enter a Limit: ";
    cin >> limit;
    int sum = 0;

    for (int i = 0; i <= limit; i++)
    {
        sum = sum + i;
        cout << i << " ";
    }
    cout << endl;
    cout << "Total sum: " << sum;
}